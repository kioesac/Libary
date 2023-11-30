#include "quanli.h"
#include "menu.h"
int main()                                                                                                                      //menu chon chuc nang
{
    system("cls");
    int n, m;                                                                                                                   //n la chuc nang chinh, m la chuc nang phu
    int a = -1;                                                                                                                 //a la so luong doc gia (ma doc gia), -1 co nghia la khong co doc gia
    int b = -1;                                                                                                                 //b la so loai sach, -1 co nghia la khong co sach
    cout << "Chao mung ban den voi thu vien truong Dai hoc Khoa hoc tu nhien TP.HCM" << endl << endl;
    char tenDocGia[100][30], soCMND[100][15], gioiTinh[100][5], ngayThangNamSinh[100][15], address[100][50], email[100][30];
    char tenSach[100][50], tacGia[100][30], maSach[100][20], nhaXuatBan[100][20], namXuatBan[100][5], theLoai[100][20], giaSach[100][20], soQuyenSach[100][100];
    do
    {
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
                        danhSachDocGia(a, tenDocGia, soCMND, gioiTinh, ngayThangNamSinh, address, email);
                        break;
                    case 2:
                        themDocGia(a, tenDocGia, soCMND, gioiTinh, ngayThangNamSinh, address, email);
                        break;
                    case 3:
                        chinhSuaThongTinDocGia(a, tenDocGia, soCMND, gioiTinh, ngayThangNamSinh, address, email);
                        break;
                    case 4:
                        xoaThongTinMotDocGia(a, tenDocGia, soCMND, gioiTinh, ngayThangNamSinh, address, email);
                        break;
                    case 5:
                        timDocGiaBangCMND(a, tenDocGia, soCMND);
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
                    case 1:
                        danhSachSach(b, tenSach, tacGia, maSach, nhaXuatBan, namXuatBan, theLoai, giaSach, soQuyenSach);
                        break;
                    case 2:
                        themSach(b, tenSach, tacGia, maSach, nhaXuatBan, namXuatBan, theLoai, giaSach, soQuyenSach); 
                        break;
                    case 3:
                        chinhSuaThongTinMotQuyenSach(b, tenSach, tacGia, maSach, nhaXuatBan, namXuatBan, theLoai, giaSach, soQuyenSach);
                        break;
                    case 4:
                        xoaThongTinSach(b, tenSach, tacGia, maSach, nhaXuatBan, namXuatBan, theLoai, giaSach, soQuyenSach);
                        break;
                    case 5:
                        timSachBangISBN(b, tenSach, maSach);
                        break;
                    case 6:
                        timSachTheoTenSach(b, tenSach, tacGia, maSach, nhaXuatBan, namXuatBan, theLoai, giaSach, soQuyenSach);
                        break;
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