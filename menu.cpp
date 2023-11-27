#include "quanlidocgia.h"
#include "menu.h"
#include <string.h>
using namespace std;
int main()                                                                                                         //menu chon chuc nang
{
    system("cls");
    int n, m;                                                                                                      //n la chuc nang chinh, m la chuc nang phu
    int a = -1;                                                                                                    //a la so hang (so luong doc gia), -1 co nghia la khong co doc gia
    char tenDocGia[100][100];
    char soCMND[100][12];
    do
    {
        cout << "Chao mung ban den voi thu vien truong Dai hoc Khoa hoc tu nhien TP.HCM" << endl << endl;
        menuChinh();
        cin >> n;
        system("cls");
        switch(n)
        {
            case 1:
                menuDocGia();
                cin >> m;
                switch(m)
                {
                    case 1:
                        danhSachDocGia(a, tenDocGia, soCMND);
                        break;
                    case 2:
                        themDocGia(a, tenDocGia, soCMND);
                        break;
                    case 3:
                        chinhSuaThongTinDocGia(a, tenDocGia);
                        break;
                    case 4:
                        xoaThongTinMotDocGia(a, tenDocGia);
                        break;
                    default:
                        cout << endl << "Khong the chay chuong trinh, tu dong quay lai!" << endl << endl;
                    break;
                }
                break;
            case 2:
                menuSach();
                cin >> m;
                switch(m)
                {
                    default:
                        cout << endl << "Khong the chay chuong trinh, tu dong quay lai!" << endl << endl;
                    break;
                }
                break;
            case 3:
            case 4:
            case 5:
                menuThongKe();
                cin >> m;
                switch(m)
                {
                    default:
                        cout << endl << "Khong the chay chuong trinh, tu dong quay lai!" << endl << endl;
                    break;
                }
            case 6:
                cout << endl << "da thoat chuong trinh!" << endl;
                break;
            default:
                cout << endl << endl << "Khong the chay chuong trinh, tu dong thoat!" << endl << endl;
                break;
        }
    }
    while(n > 0 && n < 6);
}