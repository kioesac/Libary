#include "menu.h"
#include "quanli.h"
int main()
{
    int n, m;                                                                                            //n la chuc nang chinh, m la chuc nang phu
    docgia          a[100]; int x = 0;
    sach            b[100]; int y = 0;
    borrowticket    c[100]; int z = 0;
    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    nhapThongTinDocGia(a, x);
    nhapThongTinSach(b, y);
    do
    {
        system("cls");
        cout << "Chao mung ban den voi thu vien truong Dai hoc Khoa hoc tu nhien TP.HCM" << endl << endl;
        menuChinh();
        cin >> n;
        switch(n)
        {
            case 1:
                system("cls");
                menuDocGia();
                cin >> m;
                switch(m)
                {
                    case 1:
                        danhSachDocGia(a, x);
                        break;
                    case 2:
                        themDocGia(a, x);
                        break;
                    case 3:
                        chinhSuaDocGia(a, x);
                        break;
                    case 4:
                        xoaDocGia(a, x);
                        break;
                    case 5:
                        timKiemBangCCND(a, x);
                        break;
                    case 6:
                        timKiemBangHoTen(a, x);
                        break;
                    default:
                        cout << endl << "Khong the chay chuong trinh, tu dong quay lai!" << endl << endl;
                    break;
                }
                break;
            case 2:
                system("cls"); 
                menuSach();
                cin >> m;
                switch(m)
                {
                    case 1:
                        danhSachSach(b, y);
                        break;
                    case 2:
                        themSach(b, y);
                        break;
                    case 3:
                        chinhSuaSach(b, y);
                        break;
                    case 4:
                        xoaSach(b, y);
                        break;
                    case 5:
                        timKiemBangISBN(b, y);
                        break;
                    case 6:
                        timKiemBangTenSach(b, y);
                        break;
                    default:
                        cout << endl << "Khong the chay chuong trinh, tu dong quay lai!" << endl << endl;
                    break;
                }
                break;
            case 3:
                createTicket(a, b, c, x, y, z, monthDays);
                break;
            case 4:
                returnTicket(b, c, y, z, monthDays);
                break;
            case 5:
                system("cls");
                menuThongKe();
                cin >> m;
                switch(m)
                {
                    default:
                        cout << endl << "Khong the chay chuong trinh, tu dong quay lai!" << endl << endl;
                    break;
                }
            case 0:
                system("cls");
                cout << endl << "da thoat chuong trinh!" << endl;
                break;
            default:
                system("cls");
                cout << "Khong the chay chuong trinh, tu dong thoat!" << endl << endl;
                break;
        }
    }
    while(n > 0 && n < 6);
}