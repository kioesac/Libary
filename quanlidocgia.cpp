#include "quanlidocgia.h"
using namespace std;
void danhSachDocGia(int& a, char tenDocGia[100][100], char soCMND[100][12])
{
    system("cls");
    cout << endl << "Danh sach doc gia hien tai (STT - Ho va Ten - CMND): " << endl << endl;
    for(int i = 0; i <= a; i++)
    {
        cout << i << " - " << tenDocGia[i] << " - " << soCMND[i] << endl;
    }
    cout << endl << "Quay lai menu..." << endl << endl;
}
void themDocGia(int& a, char tenDocGia[100][100], char soCMND[100][12])
{
    a += 1;
    cout << endl << "Nhap ten doc gia moi (doc gia " << a << "): ";
    cin.ignore();
    cin.getline(tenDocGia[a], 100);
    do
    {
        cout << endl << "Nhap CMND cua doc gia " << a << ": ";
        cin.get(soCMND[a], 100);
    }
    while(strlen(soCMND[a]) != 12);
    cout << endl << "Thanh cong! Quay lai menu... " << endl << endl;
}
void chinhSuaThongTinDocGia(int& a, char tenDocGia[100][100])
{
    bool khongDocGia = false;
    if(a < 0) khongDocGia = true;                                                                                   //De kiem tra neu khong co doc gia thi thoat ra menu
    if(khongDocGia) cout << endl << "Khong co doc gia de chinh sua ten! Quay lai menu..." << endl << endl;
    else
    {
        cout << endl << "Nhap so thu tu doc gia de chinh sua ten (bat dau tu 0): ";
        int i;
        cin >> i;
        cout << endl <<"Nhap ten moi cua doc gia " << i << ": ";
        cin.ignore();
        cin.getline(tenDocGia[i], 100);
        cout << endl << "Thanh cong! Quay lai menu... " << endl << endl;
    }
}
void xoaThongTinMotDocGia(int& a, char tenDocGia[100][100])
{
    bool khongDocGia = false;
    if(a < 0) khongDocGia = true;                                                                                   //De kiem tra neu khong co doc gia thi thoat ra menu
    if(khongDocGia) cout << endl << "Khong co doc gia de xoa! Quay lai menu..." << endl << endl;
    else
    {
        cout << endl << "Nhap so thu tu doc gia de xoa (bat dau tu 0): ";
        int i;
        cin >> i;
        strcpy(tenDocGia[i], " ");
        cout << endl << "Thanh cong! Quay lai menu... " << endl << endl;
    }
}