#include "quanli.h"
void createTicket(docgia a[100], sach b[100], borrowticket c[100], int x, int y, int& z, int monthDays[13])
{
    system("cls");
    if(x == 0 || y == 0) cout << "Khong ton tai doc gia hoac sach! ";
    else
    {
        int check; char check2[20]; int t = 0;
        bool doIt = false;  bool borrow = false;
        do
        {
            cout << "Nhap ma doc gia cua doc gia muon sach: ";    cin >> check;
        }
        while(check / 100000 <= 0 || check / 100000 >= 10);
        for(int i = 0; i < x; i++)
        {
            if(a[i].subscriptionId == check)
            {
                for(int j = 0; j < z; j++) if((strcmp(c[j].name, a[i].name) == 0) && c[z].done == false)
                {
                    cout << "doc gia " << a[i].name << " dang muon sach! " << endl; borrow = true;
                    break;
                }
            }
        }
        for(int i = 0; (i < x) && (borrow == false); i++)
        {
            if(a[i].subscriptionId == check)
            {
                strcpy(c[z].name, a[i].name);
                doIt = true;
                break;
            }
            else
            {
                if(i == x - 1) cout << "Khong ton tai doc gia! ";
                continue;
            }
        }
        if(doIt)
        {
            do
            {
                doIt = true;
                cin.ignore();
                cout << "Nhap ma sach cua sach ma doc gia " << c[z].name << " can muon: ";  cin.getline(check2, 20);
                for(int i = 0; i < y; i++)
                {
                    if(strcmp(b[i].id, check2) == 0 && b[i].quantity != 0)
                    {
                        strcpy(c[z].bookName[t], b[i].name);
                        b[i].quantity--;
                        cout << "Sach muon: " << c[z].bookName[t] << endl << endl;
                        t++;
                        break;
                    }
                    else
                    {
                        if(i == y - 1)
                        {
                            cout << endl << "Khong ton tai hoac het sach! ";
                        }
                        continue;
                    }
                }
                cout << "Tiep tuc muon sach ? Nhap 1 de tiep tuc muon, 0 de ket thuc! ";                 cin >> check;
            }
            while(check != 0);
            if(t > 0)
            {
                cin.ignore();
                cout << endl;
                do
                {
                    cout << "Nhap ngay muon sach theo cu phap dd/mm/yyyy: ";                cin.getline(check2, 20);
                    strcpy(c[z].borrowDate, check2);
                }
                while(strlen(c[z].borrowDate) != 10);
                int day = totalDays(check2, monthDays);    int dayTemp = 0;     int kq = 0;
                do
                {
                    do
                    {
                        cout << "Nhap ngay tra sach du kien theo cu phap dd/mm/yyyy: ";     cin.getline(check2, 20);
                        strcpy(c[z].returnDate, check2);
                    }
                    while(strlen(c[z].returnDate) != 10);
                    dayTemp = totalDays(check2, monthDays);
                    kq = dayTemp - day;
                }
                while(kq <= 0 || kq > 7);
                z += 1;
                cout << "Thanh cong! ";
            }
        }
    }
    cout << "Quay ve menu..." << endl << endl; system("pause");
}

void returnTicket(sach b[100], borrowticket c[100], int y, int z, int monthDays[13])
{
    system("cls");
    if(z == 0) cout << "Khong co doc gia nao dang muon sach! ";
    else
    {
        char check[50];
        int i;
        bool doIt = false;
        cin.ignore();
        cout << "Nhap ten doc gia can tra sach: ";        cin.getline(check, 50);
        for(i = 0; i < z; i++)
        {
            if(strcmp(c[i].name, check) == 0)
            {
                doIt = true;
                break;
            }
            else
            {
                if(i == z - 1) cout << "Khong ton tai doc gia! ";
                continue;
            }
        }
        if((doIt == true) && (c[i].done == false))
        {
            int day; int dayTemp; int kq;
            char check2[20];
            do
            {
                do
                {
                    cout << "Nhap ngay tra sach cua doc gia: ";                 cin.getline(check2, 20);
                    strcpy(c[i].realReturnDate, check2);
                }
                while(strlen(check2) != 10);
                day = totalDays(check2, monthDays);
                strcpy(check2, c[i].returnDate);
                dayTemp = totalDays(check2, monthDays);
                kq = day - dayTemp;
            }
            while(kq < 0);
            if(kq != 0) c[i].lateReturn = true;
            c[i].tienPhat = 5000 * kq;
            cout << "Doc gia co mat sach hay khong ? (nhap 0 neu mat sach, 1 neu khong mat) ";     cin.getline(check, 5);
            for(int j = 0; strlen(c[i].bookName[j]) != 0; j++)
            {
                for(int k = 0; k < y; k++)
                {
                    if(strcmp(c[i].bookName[j], b[k].name) == 0 && check[0] == '0') c[i].tienPhat += b[k].price * 2;
                    else if(strcmp(c[i].bookName[j], b[k].name) == 0) b[k].quantity++;
                }
            }
            c[i].done = true;
            system("cls");
            cout << "_______________Phieu tra sach_______________"                  << endl;
            cout << "Doc gia:                       " << c[i].name                  << endl;
            cout << "sach doc gia muon tra:         " << c[i].bookName[0]           << endl;
            for(int j = 1; strlen(c[i].bookName[j]) != 0; j++)
            {
            cout << "                               " << c[i].bookName[j]           << endl;
            }
            cout << "Ngay tra sach:                 " << c[i].realReturnDate        << endl;
            if(c[i].lateReturn)
            {
            cout << "Doc gia tre han tra sach:      " << kq << " ngay"              << endl;
            }
            cout << "Tinh trang sach:               ";
            if(check[0] == '0') cout << "Mat sach"                                  << endl;
            else                cout << "Tot"                                       << endl;
            cout << "Tien phat:                     " << c[i].tienPhat              << endl;
            cout << "_____________________________________________"                 << endl;
            cout << "Thanh cong! "                                          << endl << endl;
        }
        else if(c[i].done) cout << "Doc gia nay da tra sach! ";
    }
    cout << "Quay lai menu..." << endl << endl; system("pause");
}