#include <iostream>
using namespace std;
void menuChinh()
{
    cout << "I. Quan li doc gia" << endl;
    cout << "II. Quan li sach" << endl;
    cout << "III. Lap phieu muon sach" << endl;
    cout << "IV. Lap phieu tra sach" << endl;
    cout << "V. Cac thong ke co ban" << endl;
    cout << "VI. Thoat" << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}
void menuDocGia()
{
    cout << "---Quan Li Doc Gia---" << endl;
    cout << endl << "1. Xem danh sach doc gia trong thu vien" << endl;
    cout << "2. Them doc gia" << endl;
    cout << "3. Chinh sua thong tin mot doc gia" << endl;
    cout << "4. Xoa thong tin mot doc gia" << endl;
    cout << "5. Tim kiem doc gia theo CMND" << endl;
    cout << "6. Tim kiem sach theo ho ten" << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}
void menuSach()
{
    cout << "---Quan Li Sach---" << endl;
    cout << endl << "1. Xem danh sach cac sach trong thu vien" << endl;
    cout << "2. Them sach" << endl;
    cout << "3. Chinh sua thong tin mot quyen sach" << endl;
    cout << "4. Xoa thong tin sach" << endl;
    cout << "5. Tim kiem sach theo ISBN" << endl;
    cout << "6. Tim kiem sach theo ten sach" << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}
void menuThongKe()
{
    cout << "---Thong Ke Co Ban---" << endl;
    cout << endl << "1. Thong ke so luong sach trong thu vien" << endl;
    cout << "2. Thong ke so luong sach theo the loai" << endl;
    cout << "3. Thong ke so luong doc gia" << endl;
    cout << "4. Thong ke so luong doc gia theo gioi tinh" << endl;
    cout << "5. Thong ke so sach dang muon" << endl;
    cout << "6. Thong ke danh sach doc gia bi tre han" << endl << endl;
    cout << "Thuc hien chuc nang tren bang cac nhap so: ";
}