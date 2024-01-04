#include "quanli.h"
void nhapThongTinDocGia(docgia* a, int& x)
{
    FILE* fp;
    fopen_s(&fp, "dataDocGia.txt", "r");
    char str[300];
    while(fgets(str, 300, fp) != NULL)
    {
        sscanf(str, "%d|%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%[^-]->%s", &a[x].subscriptionId, a[x].name, a[x].id, a[x].sex, a[x].birthDate, a[x].address, a[x].email, a[x].subscriptionDate, a[x].subscriptionExpirationDate);
        x++;
    }
    fclose(fp);
}
void nhapThongTinSach(sach* b, int& y)
{
    FILE* fp;
    fopen_s(&fp, "dataSach.txt", "r");
    char str[300];
    while(fgets(str, 300, fp) != NULL)
    {
        sscanf(str, "%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%[^|]|%d|%d", b[y].id, b[y].name, b[y].writer, b[y].publisher, b[y].releaseYear, b[y].type, &b[y].price, &b[y].quantity);
        y++;
    }
    fclose(fp);
}