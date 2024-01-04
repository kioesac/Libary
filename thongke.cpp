#include "quanli.h"
void soLuongSach(sach* b, int y)
{
    system("cls");
    FILE* fp; fopen_s(&fp, "data1.txt", "w");
    fprintf_s(fp, "---So luong sach co trong thu vien---\n\n");
    for(int i = 0; i < y; i++)
    {
        fprintf_s(fp, "%s - %s - %d\n", b[i].id, b[i].name, b[i].quantity);
    }
    fclose(fp);
    cout << endl << "Thanh cong! Vui long xem tai data1.txt" << endl; system("pause");
}

void theLoaiSach(sach* b, int y)
{
    system("cls");
    FILE* fp; fopen_s(&fp, "data2.txt", "w");
    char check[100][20]; int t = 0;
    bool themTheLoai;
    for(int i = 0; i < y; i++)
    {
        themTheLoai = true;
        for(int j = 0; j < i; j++)
        {
            if(strcmp(b[j].type, b[i].type) == 0) themTheLoai = false;
        }
        if(themTheLoai) strcpy(check[t++], b[i].type);
    }
    for(int j = 0; j < t; j++)
    {
        fprintf_s(fp, "%s\n", check[j]);
        for(int i = 0; i < y; i++)
        {
            if(strcmp(b[i].type, check[j]) == 0)
            {
                fprintf_s(fp, "%s, ", b[i].name);
            }
        }
        fprintf_s(fp, "\n\n");
    }
    fclose(fp);
    cout << endl << "Thanh cong! Vui long xem tai data2.txt" << endl; system("pause");
}

void soLuongDocGia(docgia* a, int x)
{
    system("cls");
    FILE* fp; fopen_s(&fp, "data3.txt", "w");
    fprintf_s(fp, "So luong doc gia: %d doc gia!\n\n", x);
    for(int i = 0; i < x; i++)
    {
        fprintf_s(fp, "%d - %s\n", a[i].subscriptionId, a[i].name);
    }
    fclose(fp);
    cout << endl << "Thanh cong! Vui long xem tai data3.txt" << endl; system("pause");
}

void soLuongDocGiaTheoGioiTinh(docgia* a, int x)
{
    system("cls");
    FILE* fp; fopen_s(&fp, "data4.txt", "w");
    char check[][5] = {"Nam", "Nu"};
    int total;
    for(int i = 0; i < 2; i++)
    {
        total = 0;
        fprintf_s(fp, "Doc gia %s:\n\n", check[i]);
        for(int j = 0; j < x; j++)
        {
            if(strcmp(a[j].sex, check[i]) == 0)
            {
                total++;
                fprintf_s(fp, "%d. %d - %s\n", total, a[j].subscriptionId, a[j].name);
            }
        }
        fprintf_s(fp, "___Co %d doc gia %s___\n\n", total, check[i]);
    }
    fclose(fp);
    cout << endl << "Thanh cong! Vui long xem tai data4.txt" << endl; system("pause");
}

void soSachDangMuon(borrowticket* c, int z)
{
    system("cls");
    FILE* fp; fopen_s(&fp, "data5.txt", "w");
    bool themSach;
    char check[100][50]; int t = 0; int sl; int total = 0;
    for(int i = 0; (i < z) && c[i].done == false; i++)
    {
        for(int j = 0; strlen(c[i].bookName[j]) != 0; j++)
        {
            themSach = true;
            for(int k = 0; k < t; k++)
            {
                if(strcmp(check[k], c[i].bookName[j]) == 0) themSach = false;
            }
            if(themSach) strcpy(check[t++], c[i].bookName[j]);
        }
    }
    fprintf_s(fp, "So luong sach dang muon:\n\n");
    for(int i = 0; i < t; i++)
    {
        sl = 0;
        fprintf_s(fp, "%s: ", check[i]);
        for(int j = 0; (j < z) && (c[i].done == false); j++)
        {
            for(int k = 0; strlen(c[j].bookName[k]) != 0; k++)
            {
                if(strcmp(c[j].bookName[k], check[i]) == 0) sl++;
            }
        }
        total += sl;
        fprintf_s(fp, "%d\n", sl);
    }
    fprintf_s(fp, "\nTong so cuon sach dang muon: %d", total);
    fclose(fp);
    cout << endl << "Thanh cong! Vui long xem tai data5.txt" << endl; system("pause");
}

void docGiaTreHan(borrowticket* c, int z)
{
    system("cls");
    FILE* fp; fopen_s(&fp, "data6.txt", "w");
    fprintf_s(fp, "Cac doc gia bi tre han: \n\n");
    for(int i = 0; i < z; i++)
    {
        if(c[i].lateReturn == true)
        {
            fprintf_s(fp, "%d. %s\n", i + 1, c[i].name);
        }
    }
    fclose(fp);
    cout << endl << "Thanh cong! Vui long xem tai data6.txt" << endl; system("pause");
}