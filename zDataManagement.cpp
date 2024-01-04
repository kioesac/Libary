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

void lamMoiFileDocGia(docgia* a, int x)
{
    FILE* fp;
    fopen_s(&fp, "dataDocGia.txt", "w");
    for(int i = 0; i < x; i++)
    {
        fprintf_s(fp, "%d|%s|%s|%s|%s|%s|%s|%s->%s\n", a[x].subscriptionId, a[i].name, a[x].id, a[i].sex, a[i].birthDate, a[i].address, a[i].email, a[i].subscriptionDate, a[x].subscriptionExpirationDate);
    }
    fclose(fp);
}

void lamMoiFileSach(sach* b, int y)
{
    FILE* fp;
    fopen_s(&fp, "dataSach.txt", "w");
    for(int i = 0; i < y; i++)
    {
        fprintf_s(fp, "%s|%s|%s|%s|%s|%s|%d|%d\n", b[i].id, b[i].name, b[i].writer, b[i].publisher, b[i].releaseYear, b[i].type, b[i].price, b[i].quantity);
    }
    fclose(fp);
}

void lamMoiFileMuonTra(borrowticket* c, int z)
{
    FILE* fp;
    fopen_s(&fp, "dataMuonTra.txt", "w");
    for(int i = 0; i < z; i++)
    {
        fprintf_s(fp, "%s\n", c[i].name);
        fprintf_s(fp, "sach muon:           %s\n", c[i].bookName[0]);
        for(int j = 1; strlen(c[i].bookName[j]) != 0; j++)
        {
            fprintf_s(fp, "                     %s\n", c[i].bookName[j]);
        }
        fprintf_s(fp, "ngay muon:           %s\n", c[i].borrowDate);
        fprintf_s(fp, "ngay tra du kien:    %s\n", c[i].returnDate);
        if(c[i].done == true)
        {
            fprintf_s(fp, "ngay tra thuc te:    %s\n", c[i].realReturnDate);
            if(c[i].matSach == true)
            {
                fprintf_s(fp, "tinh trang sach:     Mat sach\n");
            }
            else
            {
                fprintf_s(fp, "tinh trang sach:     Tot\n");
            }
            fprintf_s(fp, "tien phat:           %d\n", c[i].tienPhat);
        }
        fprintf_s(fp, "\n");
    }
    fclose(fp);
}
