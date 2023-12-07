#include "quanli.h"
#include "math.h"
void phieuMuonSach(int a, int b, char tenDocGia[100][30], char sachDangMuon[100][50], char tenSach[100][50], char ngayMuonSach[100][15], char ngayTraSach[100][15])
{
    system("cls");
    char ten[30];
    char sach[50];
    cout << "---Phieu muon sach---" << endl << endl;
    cout << "Ten doc gia: ";
    cin.ignore();
    cin.getline(ten, 30);
    cout << "Ten sach ma doc gia ay muon: ";
    cin.getline(sach, 30);
    bool doIt1 = false;
    bool doIt2 = false;
    int maDocGia;
    for(int i = 0; i <= a; i++)
    {
        if(strcmp(ten, tenDocGia[i]) == 0)
        {
            doIt1 = true;
            maDocGia = i;
            break;
        }
    }
    for(int i = 0; i <= b; i++)
    {
        if(strcmp(sach, tenSach[i]) == 0)
        {
            doIt2 = true;
            break;
        }
    }
    if(doIt1 == true && doIt2 == true)
    {
        strcpy(sachDangMuon[maDocGia], sach);
        do
        {
            cout << endl << "Nhap ngay muon theo cu phap dd/mm/yyyy:        ";
            cin.getline(ngayMuonSach[maDocGia], 15);
        }
        while(strlen(ngayMuonSach[maDocGia]) != 10);
        
        do
        {
            cout << "Nhap ngay tra theo cu phap dd/mm/yyyy (TOI DA 7 NGAY):     ";
        cin.getline(ngayTraSach[maDocGia], 15);
        }
        while(strlen(ngayTraSach[maDocGia]) != 10);
        cout << endl << "Thanh cong!" << endl;
        system("pause");
        system("cls");
    }
    else cout << endl << "Khong co doc gia hoac sach do! Quay lai menu..." << endl << endl; 
}
void phieuTraSach(int a, int b, int monthDays[12], char tenDocGia[100][30], char maSach[100][20], char giaSach[100][20], char sachDangMuon[100][50], char tenSach[100][50], char ngayMuonSach[100][15], char ngayTraSach[100][15], char ngayTraSachThucTe[100][15])
{
    system("cls");
    char ten[30];
    char sach[50];
    cout << "---Phieu tra sach---" << endl << endl;
    cout << "Ten doc gia muon tra sach: ";
    cin.ignore();
    cin.getline(ten, 30);
    bool doIt = false;
    int maDocGia;
    for(int i = 0; i <= a; i++)
    {
        if(strcmp(ten, tenDocGia[i]) == 0 && sachDangMuon[i][0] != '\0')
        {
            doIt = true;
            maDocGia = i;
            break;
        }
    }
    if(doIt)
    {
        cout << endl << "Sach dang muon va ma sach:     " << sachDangMuon[maDocGia] << " -- " << maSach[maDocGia] << endl;
        cout << "Ngay muon sach:    " << ngayMuonSach[maDocGia] << endl;
        cout << "Ngay tra sach:     " << ngayTraSach[maDocGia] << endl << endl;
        do
        {
            cout << "Nhap ngay tra sach thuc te theo cu phap dd/mm/yyyy (neu mat, hay nhap 0): ";
            cin.getline(ngayTraSachThucTe[maDocGia], 15);
        }
        while(strlen(ngayTraSachThucTe[maDocGia]) != 10 && ngayTraSachThucTe[maDocGia][0] != '0');
        if(ngayTraSachThucTe[maDocGia][0] == '0')
        {
            int tienPhat = 0;
            tienPhat = bookPrice(maDocGia, giaSach);
            cout << endl << "Tien phat mat sach: " << tienPhat * 2 << endl;
            system("pause");
            system("cls");
        }
        else
        {
            int day1 = totalDays(maDocGia, ngayTraSachThucTe, monthDays);
            int day2 = totalDays(maDocGia, ngayTraSach, monthDays);
            int soNgayTre = day1 - day2;
            cout << endl << "Tien phat tre han: " << 5000 * soNgayTre << endl;
            system("pause");
            system("cls");
        }
    }
    else 
    {
        cout << "Khong co du lieu doc gia muon sach!" << endl;
        system("pause");
        system("cls");
        cout << "Quay lai menu..." << endl << endl;
    }
}