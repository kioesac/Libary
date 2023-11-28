#include "quanlidocgia.h"
using namespace std;
void danhSachDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50])
{
    system("cls");
    bool khongDocGia = false;
    if(a < 0) khongDocGia = true;                                                                                   //De kiem tra neu khong co doc gia thi thoat ra menu
    if(khongDocGia) cout << endl << "Khong co doc gia de in danh sach! Quay lai menu..." << endl << endl;
    else
    {
        cout << "--------------Danh sach doc gia hien tai--------------" << endl;
        cout << "Ma doc gia -- Ho va Ten -- CMND -- Gioi tinh -- Ngay thang nam sinh -- Dia chi -- Email" << endl << endl;
        for(int i = 0; i <= a; i++)
        {
            cout << i << " -- " << tenDocGia[i] << " -- " << soCMND[i] << " -- " << gioiTinh[i] << " -- " << ngayThangNamSinh[a] << " -- " << address[a] << " -- " << email[a] << endl;
        }
        cout << endl;
        system("pause");
        cout << endl << "Quay lai menu..." << endl << endl;
    }
}
void themDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50])
{
    a += 1;
    system("cls");
    cout << "Ma doc gia: " << a;                                                                                                                //Ma doc gia
    cout << endl << "Nhap ten doc gia moi: ";                                                                                                   //Nhap ten doc gia moi
    cin.ignore();
    cin.getline(tenDocGia[a], 100);
    do
    {
        cout << endl << "Nhap CMND cua doc gia: ";                                                                                              //Nhap so CMND cua doc gia moi
        cin.getline(soCMND[a], 21);
    }
    while(strlen(soCMND[a]) != 12);
    cout << endl << "Gioi tinh doc gia ?(Nam hay Nu): ";                                                                                        //Gioi tinh cua doc gia doc gia moi
    cin.getline(gioiTinh[a], 10);
    do
    {
        cout << endl << "Nhap ngay thang nam sinh cua doc gia theo cu phap " << "dd/mm/yyyy" << ": ";                                           //Ngay thang nam sinh cua doc gia moi
        cin.getline(ngayThangNamSinh[a], 210);
    }
    while(strlen(ngayThangNamSinh[a]) != 10);
    cout << endl << "Dia chi cua doc gia?: ";                                                                                                   //Dia chi doc gia
    cin.getline(address[a], 100);
    cout << endl << "Nhap email cua doc gia: ";                                                                                                 //email cua doc gia
    cin.getline(email[a], 50);
    system("cls");
    cout << endl << "Thanh cong! Quay lai menu... " << endl << endl;
}
void chinhSuaThongTinDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50])
{
    system("cls");
    bool khongDocGia = false;
    if(a < 0) khongDocGia = true;                                                                                   //De kiem tra neu khong co doc gia thi thoat ra menu
    if(khongDocGia) cout << endl << "Khong co doc gia de chinh sua ten! Quay lai menu..." << endl << endl;
    else
    {
        cout << endl << "Nhap ma doc gia de chinh sua ten: ";                                                       //Chinh sua ten doc gia can sua
        int i;
        cin >> i;
        cout << endl <<"Nhap ten moi cua doc gia: ";
        cin.ignore();
        cin.getline(tenDocGia[i], 100);
        do
        {
            cout << endl << "Nhap CMND moi cua doc gia: ";                                                  //Chinh sua so CMND cua doc gia can sua
            cin.getline(soCMND[i], 21);
        }
        while(strlen(soCMND[i]) != 12);
        cout << endl << "Gioi tinh moi doc gia ?(Nam hay Nu): ";                                                                                        //Gioi tinh moi cua doc gia doc gia moi
        cin.getline(gioiTinh[i], 10);
        do
        {
            cout << endl << "Nhap ngay thang nam sinh moi cua doc gia theo cu phap " << "dd/mm/yyyy" << ": ";                                           //Ngay thang nam sinh moi cua doc gia moi
            cin.getline(ngayThangNamSinh[i], 210);
        }
        while(strlen(ngayThangNamSinh[i]) != 10);
        cout << endl << "Dia chi moi cua doc gia?: ";                                                                                                   //Dia chi moi doc gia
        cin.getline(address[i], 100);
        cout << endl << "Nhap email moi cua doc gia: ";                                                                                                 //email moi cua doc gia
        cin.getline(email[i], 50);
        system("cls");
        cout << endl << "Thanh cong! Quay lai menu... " << endl << endl;
    }
}
void xoaThongTinMotDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50])
{
    system("cls");
    bool khongDocGia = false;
    if(a < 0) khongDocGia = true;                                                                                   //De kiem tra neu khong co doc gia thi thoat ra menu
    if(khongDocGia) cout << endl << "Khong co doc gia de xoa! Quay lai menu..." << endl << endl;
    else
    {
        cout << endl << "Nhap ma doc gia de xoa (bat dau tu 0 -> " << a << "): ";
        int i;
        bool doo = true;
        cin >> i;
        if(i > a) doo = false;
        if(doo) a -= 1;                                                                                                     //tru 1 vi co 1 doc gia bi xoa
        for(int k = i; k <= a; k++)                                                                                 //day cac doc gia len (ma doc gia -1), vao cho doc gia bi xoa
        {
            strcpy(tenDocGia[k], tenDocGia[k + 1]);
            strcpy(soCMND[k], soCMND[k + 1]);
            strcpy(gioiTinh[k], gioiTinh[k + 1]);
            strcpy(ngayThangNamSinh[k], ngayThangNamSinh[k + 1]);
            strcpy(address[k], address[k + 1]);
            strcpy(email[k], email[k + 1]);
        }
        cout << endl << "Thanh cong! Vui long xem danh sach moi cua doc gia!... " << endl << endl;
    }
}
void timDocGiaBangCMND(int& a, char tenDocGia[100][100], char soCMND[100][21])
{
    system("cls");
    char timCMND[21];
    cin.ignore();
    do
    {
        cout << endl << "Nhap CMND cua doc gia can tim: ";
        cin.getline(timCMND, 21);
    }
    while(strlen(timCMND) != 12);
    for(int i = 0; i <= a; i++)
    {
        if(strcmp(timCMND, soCMND[i]) == 0)
        {
            cout << endl << "Ten doc gia can tim: " << tenDocGia[i] << endl;
            break;
        }
        else if(i == a) cout << "Khong tim thay doc gia!" << endl;
    }
    cout << endl;
    system("pause");
    cout << "Quay lai menu... " << endl << endl;
}