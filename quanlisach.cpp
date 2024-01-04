#include "quanli.h"
void danhSachSach(sach b[100], int y)
{
    system("cls");
    if(y == 0) cout << endl << "Khong co sach de in danh sach! "; //De kiem tra neu khong co sach thi thoat ra menu
    else
    {
        cout << "_____________________Danh sach sach hien tai_____________________"                                                  << endl;
        cout << "Ma sach | Ten sach | Tac gia | Nha xuat ban | Nam xuat ban | The loai | Gia sach | So quyen sach"  << endl << endl;
        for(int i = 0; i < y; i++)
        {
            cout << b[i].id << " | " << b[i].name << " | " << b[i].writer << " | " << b[i].publisher << " | " << b[i].releaseYear << " | " << b[i].type << " | " << b[i].price << " | " << b[i].quantity << endl;
        }
        cout << "Thanh cong! ";
    }
    cout <<"Quay lai menu..." << endl << endl;
    system("pause");
}

void themSach(sach b[100], int& y)
{
    system("cls");
    cin.ignore();
    cout << "Nhap ten sach moi: ";                                          cin.getline(b[y].name, 50);
    cout << "Nhap ma sach: ";                                               cin.getline(b[y].id, 20);
    cout << "Nhap tac gia sach: ";                                          cin.getline(b[y].writer, 50);
    cout << "Nhap nha xuat ban cua sach: ";                                 cin.getline(b[y].publisher, 50);
    while(strlen(b[y].releaseYear) != 4)
    {
        cout << "Nhap nam xuat ban theo dinh dang yyyy: ";                  cin.getline(b[y].releaseYear, 100);
    }
    cout << "Nhap the loai cua sach: ";                                     cin.getline(b[y].type, 50);
    cout << "Nhap gia tien cua sach va so luong quyen sach hien tai: ";     cin >> b[y].price >> b[y].quantity;
    y += 1;
    cout <<"Thanh cong! Quay lai menu..."<< endl << endl;   system("pause");
}

void chinhSuaSach(sach b[100], int y)
{
    system("cls");
    cin.ignore();
    cout << "Nhap ten sach moi: ";                                          cin.getline(b[y].name, 50);
    cout << "Nhap ma sach: ";                                               cin.getline(b[y].id, 20);
    cout << "Nhap tac gia sach: ";                                          cin.getline(b[y].writer, 50);
    cout << "Nhap nha xuat ban cua sach: ";                                 cin.getline(b[y].publisher, 50);
    while(strlen(b[y].releaseYear) != 4)
    {
        cout << "Nhap nam xuat ban theo dinh dang yyyy: ";                  cin.getline(b[y].releaseYear, 100);
    }
    cout << "Nhap the loai cua sach: ";                                     cin.getline(b[y].type, 50);
    cout << "Nhap gia tien cua sach va so luong quyen sach hien tai: ";     cin >> b[y].price >> b[y].quantity;
    y += 1;
    cout <<"Thanh cong! Quay lai menu..."<< endl << endl;   system("pause");
}

void xoaSach(sach b[100], int& y)
{
    system("cls");
    if(y == 0) cout << endl << "Khong co sach de xoa! "; //De kiem tra neu khong co sach thi thoat ra menu
    else
    {
        char check[20];
        cin.ignore();
        cout << "Nhap ma sach de chinh sua thong tin sach do: ";                cin.getline(check, 20);
        for(int i = 0; i < y; i++)
        {
            if(b[i].id == check)
            {
                y -= 1;
                for(int j = i; j < y; j++) b[j] = b[j + 1];
                cout << "Thanh cong! ";
                break;
            }
            else
            {
                if(i == y - 1) cout << "Khong ton tai sach! ";
                continue;
            }
        }
    }
    cout << "Quay lai menu..." << endl << endl;  system("pause");
}

void timKiemBangISBN(sach b[100], int y)
{
    system("cls");
    if(y == 0) cout << endl << "Khong co sach! "; //De kiem tra neu khong co sach thi thoat ra menu
    else
    {
        char check[20];
        cin.ignore();
        cout << "Nhap ma sach de chinh sua thong tin sach do: ";                cin.getline(check, 20);
        for(int i = 0; i < y; i++)
        {
            if(strcmp(b[i].id, check) == 0)
            {
                cout << endl;
                cout << "---Day la thong tin cua sach ma ban muon tim kiem---" << endl;
                cout << "Ma sach | Ten sach | Tac gia | Nha xuat ban | Nam xuat ban | The loai | Gia sach | So quyen sach"  << endl << endl;
                cout << b[i].id << " | " << b[i].name << " | " << b[i].writer << " | " << b[i].publisher << " | " << b[i].releaseYear << " | " << b[i].type << " | " << b[i].price << " | " << b[i].quantity << endl;
                cout << "Thanh cong! ";
                break;
            }
            else
            {
                if(i == y - 1) cout << endl << "Khong ton tai sach! ";
                continue;
            }
        }
    }
    cout << "Quay lai menu..." << endl << endl; system("pause");
}

void timKiemBangTenSach(sach b[100], int y)
{
    system("cls");
    if(y == 0) cout << endl << "Khong co sach! "; //De kiem tra neu khong co sach thi thoat ra menu
    else
    {
        char check[50];
        cin.ignore();
        cout << "Nhap ten sach de chinh sua thong tin sach do: ";                cin.getline(check, 50);
        for(int i = 0; i < y; i++)
        {
            if(strcmp(b[i].name, check) == 0)
            {
                cout << endl;
                cout << "---Day la thong tin cua sach ma ban muon tim kiem---" << endl;
                cout << "Ma sach | Ten sach | Tac gia | Nha xuat ban | Nam xuat ban | The loai | Gia sach | So quyen sach"  << endl << endl;
                cout << b[i].id << " | " << b[i].name << " | " << b[i].writer << " | " << b[i].publisher << " | " << b[i].releaseYear << " | " << b[i].type << " | " << b[i].price << " | " << b[i].quantity << endl;
                cout << "Thanh cong! ";
                break;
            }
            else
            {
                if(i == y - 1) cout << endl << "Khong ton tai sach! ";
                continue;
            }
        }
    }
    cout << "Quay lai menu..." << endl << endl; system("pause");
}