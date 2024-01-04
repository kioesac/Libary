#include "quanli.h"
int totalDays(char check2[20], int monthDays[13])
{
    int day = ((int)check2[0] - 48) * 10 + ((int)check2[1] - 48);
    int month = ((int)check2[3] - 48) * 10 + ((int)check2[4] - 48);
    int year = ((int)check2[6] - 48) * 1000 + ((int)check2[7] - 48) * 100 + ((int)check2[8] - 48) * 10 + ((int)check2[9] - 48);
    int kq = day + 365 * year;
    for(int i = 0; i < month; i++) kq += monthDays[i];
    if(month <= 2) year--;
    kq += year / 4 - year / 100 + year / 400;
    return kq;
}
