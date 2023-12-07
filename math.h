#include "quanli.h"
#include "menu.h"
int totalDays(int maDocGia, char temp[100][15], int monthDays[12])
{
    int day = ((int)temp[maDocGia][0] - 48) * 10 + ((int)temp[maDocGia][1] - 48);
    int month = ((int)temp[maDocGia][3] - 48) * 10 + ((int)temp[maDocGia][4] - 48);
    int year = ((int)temp[maDocGia][6] - 48) * 1000 + ((int)temp[maDocGia][7] - 48) * 100 + ((int)temp[maDocGia][8] - 48) * 10 + ((int)temp[maDocGia][9] - 48);
    int kq = day + 365 * year;
    for(int i = 0; i < month; i++) kq += monthDays[i];
    if(month <= 2) year--;
    kq += year / 4 - year / 100 + year / 400;
    return kq;
}
int bookPrice(int maDocGia, char giaSach[100][20])
{
    int kq = 0;
    for(int i = 0; giaSach[maDocGia][i] != '\0'; i++) kq = kq * 10 + (int)giaSach[maDocGia][i] - 48;
    return kq;
}
