#include "quanli.h"
void danhSachDocGia(docgia a[100], int x)
{
    system("cls");
    if(x == 0) cout << endl << "Khong co doc gia de in danh sach! "; //De kiem tra neu khong co doc gia thi thoat ra menu
    else
    {
        cout << "_____________________Danh sach doc gia hien tai_____________________"                                                  << endl;
        cout << "Ma doc gia | Ho va Ten | CMND | Gioi tinh | Ngay thang nam sinh | Dia chi | Email | Ngay lap the -> Ngay het han the"  << endl << endl;
        for(int i = 0; i < x; i++)
        {
            cout << a[i].subscriptionId << " | " << a[i].name << " | " << a[i].id << " | " << a[i].sex << " | " << a[i].birthDate << " | " << a[i].address << " | " << a[i].email << " | " << a[i].subscriptionDate << " -> " << a[i].subscriptionExpirationDate << endl;
        }
        cout << "Thanh cong! ";
    }
    cout <<"Quay lai menu..." << endl << endl; system("pause");
}

void themDocGia(docgia a[100], int& x)
{
    bool check2;
    int check = 0;
    system("cls");
    cin.ignore();
    cout << "Luu y: ma doc gia 6 chu so se duoc tao tu dong!" << endl << endl;
    do
    {
        check2 = false;
        a[x].subscriptionId = (rand() % 900000) + 100000;
        for(int i = 0; i < x; i++) if(a[i].subscriptionId == a[x].subscriptionId) check2 = true;
    }
    while(check2);
    cout << "Ma doc gia: " << a[x].subscriptionId << endl;
    cout << "Nhap ten doc gia: ";                                                       cin.getline(a[x].name, 50);
    cout << "Nhap CCND cua doc gia: ";                                                  cin.getline(a[x].id, 15);
    cout << "Nhap gioi tinh cua doc gia (Nam & Nu): ";                                  cin.getline(a[x].sex, 5);
    do
    {
        cout << "Nhap Birthday cua doc gia theo cu phap dd/mm/yyyy: ";                  cin.getline(a[x].birthDate, 15); 
    }
    while(strlen(a[x].birthDate) != 10);
    cout << "Nhap dia chi cua doc gia: ";                                               cin.getline(a[x].address, 100);
    cout << "Nhap email cua doc gia: ";                                                 cin.getline(a[x].email, 50);
    do
    {
        cout << "Nhap ngay lap the thanh vien cua doc gia theo cu phap dd/mm/yyyy: ";   cin.getline(a[x].subscriptionDate, 15); 
    }
    while(strlen(a[x].subscriptionDate) != 10);
    for(int i = 6; i <= 9; i++) check = check * 10 + (int)a[x].subscriptionDate[i] - 48;
    check += 2;
    strcpy(a[x].subscriptionExpirationDate, a[x].subscriptionDate);
    for(int i = 9; i >= 6; i--)
    {
        a[x].subscriptionExpirationDate[i] = (char)(check % 10) + 48;
        check /= 10;
    }
    x += 1;
    lamMoiFileDocGia(a, x);
    cout <<"Thanh cong! Quay lai menu..." << endl << endl; system("pause");
}

void chinhSuaDocGia(docgia a[100], int x)
{
    system("cls");
    if(x == 0) cout << endl << "Khong co doc gia de chinh sua! "; //De kiem tra neu khong co doc gia thi thoat ra menu
    else
    {
        int check = 0;
        int check2;
        do
        {
            cout << "Nhap ma doc gia de chinh sua thong tin doc gia do: ";  cin >> check2;
        }
        while(check2 / 100000 <= 0 || check2 / 100000 >= 10);
        for(int i = 0; i < x; i++)
        {
            if(a[i].subscriptionId == check2)
            {
                cin.ignore();
                cout << "Ma doc gia: " << a[i].subscriptionId << endl;
                cout << "Nhap ten doc gia: ";                                                           cin.getline(a[i].name, 50);
                cout << "Nhap CCND cua doc gia: ";                                                      cin.getline(a[i].id, 15);
                cout << "Nhap gioi tinh cua doc gia (Nam & Nu): ";                                      cin.getline(a[i].sex, 5);
                do
                {
                    cout << "Nhap Birthday cua doc gia theo cu phap dd/mm/yyyy: ";                      cin.getline(a[i].birthDate, 15);
                }
                while(strlen(a[i].birthDate) != 10);
                cout << "Nhap dia chi cua doc gia: ";                                                   cin.getline(a[i].address, 100);
                cout << "Nhap email cua doc gia: ";                                                     cin.getline(a[i].email, 50);
                do
                {
                    cout << "Nhap ngay lap the thanh vien cua doc gia theo cu phap dd/mm/yyyy: ";       cin.getline(a[i].subscriptionDate, 15);
                }
                while(strlen(a[i].subscriptionDate) != 10);
                for(int j = 6; j <= 9; j++) check = check * 10 + (int)a[i].subscriptionDate[j] - 48;
                check += 2;
                strcpy(a[i].subscriptionExpirationDate, a[i].subscriptionDate);
                for(int j = 9; j >= 6; j--)
                {
                    a[i].subscriptionExpirationDate[j] = (char)(check % 10) + 48;
                    check /= 10;
                }
                cout <<"Thanh cong! ";
                break;
            }
            else
            {
                if(i == x - 1) cout << "Khong ton tai doc gia! ";
                continue;
            }
        }
    }
    lamMoiFileDocGia(a, x);
    cout << "Quay lai menu..." << endl << endl; system("pause");
}

void xoaDocGia(docgia a[100], int& x)
{
    system("cls");
    if(x == 0) cout << endl << "Khong co doc gia de xoa! "; //De kiem tra neu khong co doc gia thi thoat ra menu
    else
    {
        int check2;
        do
        {
            cout << "Nhap ma doc gia de xoa thong tin doc gia do: ";    cin >> check2;
        }
        while(check2 / 100000 <= 0 || check2 / 100000 >= 10);
        for(int i = 0; i < x; i++)
        {
            if(a[i].subscriptionId == check2)
            {
                x -= 1;
                for(int j = i; j < x; j++) a[j] = a[j + 1];
                cout << "Thanh cong! "; 
                break;
            }
            else
            {
                if(i == x - 1) cout << "Khong ton tai doc gia! ";
                continue;
            }
        }
    }
    lamMoiFileDocGia(a, x);
    cout << "Quay lai menu..." << endl << endl; system("pause");
}

void timKiemBangCCND(docgia a[100], int x)
{
    system("cls");
    if(x == 0) cout << endl << "Khong co doc gia! "; //De kiem tra neu khong co doc gia thi thoat ra menu
    else
    {
        cin.ignore();
        char check[15];
        do
        {
            cout << "Nhap CCND cua doc gia dang tim kiem: ";    cin.getline(check, 15);
        }
        while(strlen(check) != 12);
        for(int i = 0; i < x; i++)
        {
            if(strcmp(a[i].id, check) == 0)
            {
                cout << endl;
                cout << "---Day la thong tin cua doc gia ma ban muon tim kiem---" << endl;
                cout << "Ma doc gia | Ho va Ten | CMND | Gioi tinh | Ngay thang nam sinh | Dia chi | Email | ngay lap the -> ngay het han the"  << endl << endl;
                cout << a[i].subscriptionId << " | " << a[i].name << " | " << a[i].id << " | " << a[i].sex << " | " << a[i].birthDate << " | " << a[i].address << " | " << a[i].email << " | " << a[i].subscriptionDate << " -> " << a[i].subscriptionExpirationDate << endl << endl;
                cout << "Thanh cong! ";
                break;
            }
            else
            {
                if(i == x - 1) cout << endl << "Khong ton tai doc gia! ";
                continue;
            }
        }
    }
    cout << "Quay lai menu..." << endl << endl; system("pause");
}

void timKiemBangHoTen(docgia a[100], int x)
{
    system("cls");
    if(x == 0) cout << endl << "Khong co doc gia! "; //De kiem tra neu khong co doc gia thi thoat ra menu
    else
    {
        char check[50];
        cin.ignore();
        cout << "Nhap CCND cua doc gia dang tim kiem: ";    cin.getline(check, 50);
        for(int i = 0; i < x; i++)
        {
            if(strcmp(a[i].name, check) == 0)
            {
                cout << endl;
                cout << "---Day la thong tin cua doc gia ma ban muon tim kiem---" << endl;
                cout << "Ma doc gia | Ho va Ten | CMND | Gioi tinh | Ngay thang nam sinh | Dia chi | Email | ngay lap the -> ngay het han the"  << endl << endl;
                cout << a[i].subscriptionId << " | " << a[i].name << " | " << a[i].id << " | " << a[i].sex << " | " << a[i].birthDate << " | " << a[i].address << " | " << a[i].email << " | " << a[i].subscriptionDate << " -> " << a[i].subscriptionExpirationDate << endl << endl;
                cout << "Thanh cong! ";
                break;
            }
            else
            {
                if(i == x - 1) cout << endl << "Khong ton tai doc gia! ";
                continue;
            }
        }
    }
    cout << "Quay lai menu..." << endl << endl; system("pause");
}