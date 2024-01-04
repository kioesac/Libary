#include "quanli.h"
void menuChinh()
{
    cout << "1. Quan li doc gia"                << endl;
    cout << "2. Quan li sach"                   << endl;
    cout << "3. Lap phieu muon sach"            << endl;
    cout << "4. Lap phieu tra sach"             << endl;
    cout << "5. Cac thong ke co ban"            << endl;
    cout << "-------------------------------"   << endl;
    cout << "0. Thoat"                  << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}
void menuDocGia()
{
    cout << "---Quan Li Doc Gia---"                 << endl << endl;
    cout << "1. Xem danh sach doc gia trong thu vien"       << endl;
    cout << "2. Them doc gia"                               << endl;
    cout << "3. Chinh sua thong tin mot doc gia"            << endl;
    cout << "4. Xoa thong tin mot doc gia"                  << endl;
    cout << "5. Tim kiem doc gia theo CCND"                 << endl;
    cout << "6. Tim kiem sach theo ho ten"          << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}
void menuSach()
{
    cout << "---Quan Li Sach---"                << endl << endl;
    cout << "1. Xem danh sach cac sach trong thu vien"  << endl;
    cout << "2. Them sach"                              << endl;
    cout << "3. Chinh sua thong tin mot quyen sach"     << endl;
    cout << "4. Xoa thong tin sach"                     << endl;
    cout << "5. Tim kiem sach theo ISBN"                << endl;
    cout << "6. Tim kiem sach theo ten sach"    << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}
void menuThongKe()
{
    cout << "---Thong Ke Co Ban---"                     << endl << endl;
    cout << "1. Thong ke so luong sach trong thu vien"          << endl;
    cout << "2. Thong ke so luong sach theo the loai"           << endl;
    cout << "3. Thong ke so luong doc gia"                      << endl;
    cout << "4. Thong ke so luong doc gia theo gioi tinh"       << endl;
    cout << "5. Thong ke so sach dang muon"                     << endl;
    cout << "6. Thong ke danh sach doc gia bi tre han"  << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}