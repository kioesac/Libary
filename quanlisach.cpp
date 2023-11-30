#include "quanli.h"
void danhSachSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100])
{
    system("cls");
    bool khongCoSach = false;
    if(b < 0) khongCoSach = true;                                                                                                   //De kiem tra neu khong co sach thi thoat ra menu
    if(khongCoSach) cout << endl << "Khong co sach de in danh sach! Quay lai menu..." << endl << endl;
    else
    {
        cout << "--------------Danh sach sach hien tai--------------" << endl;
        cout << "STT -- Ten Sach -- Tac Gia -- Ma sach -- Nha Xuat Ban -- Nam Xuat Ban -- The Loai -- Gia sach -- So quyen sach" << endl << endl;
        for(int i = 0; i <= b; i++)
        {
            cout << i << " -- " << tenSach[i] << " -- " << tacGia[i] << " -- " << maSach[i] << " -- " << nhaXuatBan[i] << " -- " << namXuatBan[i] << " -- " << theLoai[i] << " -- " << giaSach[i] << " -- " << soQuyenSach[i] << endl;
        }
        cout << endl;
        system("pause");
        cout << endl << "Quay lai menu..." << endl << endl;
    }
}
void themSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100])
{
    b += 1;
    system("cls");
    cout << endl << "Nhap ten sach moi: ";                                                                              //Nhap ten sach moi
    cin.ignore();
    cin.getline(tenSach[b], 50);
    cout << endl << "Ten tac gia cua cuon sach do: ";                                                                   //tac gia cua quyen sach
    cin.getline(tacGia[b], 30);
    cout << endl << "Ma sach: ";                                                                                        //ma sach
    cin.getline(maSach[b], 20);
    cout << endl << "Nha xuat ban cua cuon sach do: ";                                                                  //nha xuat ban
    cin.getline(nhaXuatBan[b], 20);
    do
    {
        cout << endl << "Nhap nam xuat ban theo cu phap " << "yyyy" << ": ";                                            //nam xuat ban
        cin.getline(namXuatBan[b], 5);
    }
    while(strlen(namXuatBan[b]) != 4);
    cout << endl << "The loai: ";                                                                                       //the loai
    cin.getline(theLoai[b], 20);
    cout << endl << "Gia tien quyen sach do: ";                                                                         //gia sach
    cin.getline(giaSach[b], 20);
    cout << endl << "So luong quyen sach: ";                                                                            //so luong sach
    cin.getline(soQuyenSach[b], 100);
    system("cls");
    cout << endl << "Thanh cong! Quay lai menu... " << endl << endl;
}
void chinhSuaThongTinMotQuyenSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100])
{
    system("cls");
    bool khongCoSach = false;
    if(b < 0) khongCoSach = true;                                                                                                   //De kiem tra neu khong co sach thi thoat ra menu
    if(khongCoSach) cout << endl << "Khong co sach chinh sua! Quay lai menu..." << endl << endl;
    else
    {
        char sachCanTim[50];
        cout << endl << "Nhap ten sach can sua: ";
        cin.ignore();
        cin.getline(sachCanTim, 50);
        for(int i = 0; i <= b; i++)
        {
            if(strcmp(tenSach[i], sachCanTim) == 0)
            {
                cout << endl << "Nhap ten sach moi: ";                                                                                      //Nhap ten sach moi
                cin.getline(tenSach[b], 50);
                cout << endl << "Ten tac gia moi cua cuon sach do: ";                                                                       //tac gia cua quyen sach
                cin.getline(tacGia[b], 30);
                cout << endl << "Ma sach moi: ";                                                                                            //ma sach
                cin.getline(maSach[b], 20);
                cout << endl << "Nha xuat ban moi cua cuon sach do: ";                                                                      //nha xuat ban
                cin.getline(nhaXuatBan[b], 20);
                do
                {
                    cout << endl << "Nhap nam xuat ban moi theo cu phap " << "yyyy" << ": ";                                                //nam xuat ban
                    cin.getline(namXuatBan[b], 5);
                }
                while(strlen(namXuatBan[b]) != 4);
                cout << endl << "The loai moi: ";                                                                                           //the loai
                cin.getline(theLoai[b], 20);
                cout << endl << "Gia tien moi cua quyen sach do: ";                                                                         //gia sach
                cin.getline(giaSach[b], 20);
                cout << endl << "So luong moi cua quyen sach: ";                                                                            //so luong sach
                cin.getline(soQuyenSach[b], 100);
                cout << endl << "Thanh cong! Quay lai menu..." << endl << endl;
                break;
            }
            else if(i == b) cout << endl << "Khong tim thay sach! Quay lai menu..." << endl << endl;
        }
    }
}
void xoaThongTinSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100])
{
    system("cls");
    bool khongCoSach = false;
    if(b < 0) khongCoSach = true;                                                                                                       //De kiem tra neu khong co sach thi thoat ra menu
    if(khongCoSach) cout << endl << "Khong co sach de in danh sach! Quay lai menu..." << endl << endl;
    else
    {
        
        int i;
        bool giamSach = true;
        cout << endl << "Nhap stt sach de xoa (bat dau tu 0 -> " << b << "): ";
        cin >> i;
        if(i > b) giamSach = false;
        if(giamSach) b -= 1;                                                                                                            //tru 1 vi co 1 sach bi xoa
        for(int k = i; k <= b; k++)                                                                                                     //day cac sach len, vao cho sach bi xoa
        {
            strcpy(tenSach[k], tenSach[k + 1]);
            strcpy(tacGia[k], tacGia[k + 1]);
            strcpy(maSach[k], maSach[k + 1]);
            strcpy(nhaXuatBan[k], nhaXuatBan[k + 1]);
            strcpy(namXuatBan[k], namXuatBan[k + 1]);
            strcpy(theLoai[k], theLoai[k + 1]);
            strcpy(giaSach[k], giaSach[k + 1]);
            strcpy(soQuyenSach[k], soQuyenSach[k + 1]);
        }
        cout << endl << "Thanh cong! Vui long xem danh sach moi cua sach!... " << endl << endl;
    }
}
void timSachBangISBN(int& b, char tenSach[100][50], char maSach[100][20])
{
    system("cls");
    bool khongCoSach = false;
    if(b < 0) khongCoSach = true;                                                                                                   //De kiem tra neu khong co sach thi thoat ra menu
    if(khongCoSach) cout << endl << "Khong co sach de tim! Quay lai menu..." << endl << endl;
    else
    {
        char maSachCanTim[50];
        cout << endl << "Nhap ma sach cua ten sach can tim: ";
        cin.ignore();
        cin.getline(maSachCanTim, 20);
        for(int i = 0; i <= b; i++)
        {
            if(strcmp(maSach[i], maSachCanTim) == 0)
            {
                cout << endl << "Ten sach ban can tim: " << tenSach[i] << endl << endl;
                system("pause");
                break;
            }
            else if(i == b) cout << "Khong tim thay!" << endl << endl;
        }
    }
}
void timSachTheoTenSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100])
{
    system("cls");
    bool khongCoSach = false;
    if(b < 0) khongCoSach = true;                                                                                                   //De kiem tra neu khong co sach thi thoat ra menu
    if(khongCoSach) cout << endl << "Khong co sach chinh sua! Quay lai menu..." << endl << endl;
    else
    {
        char sachCanTim[50];
        cout << endl << "Nhap ten sach can sua: ";
        cin.ignore();
        cin.getline(sachCanTim, 50);
        for(int i = 0; i <= b; i++)
        {
            if(strcmp(tenSach[i], sachCanTim) == 0)
            {
                cout << endl << "--------------Sach ban dang tim--------------" << endl;
                cout << "Ten Sach -- Tac Gia -- Ma sach -- Nha Xuat Ban -- Nam Xuat Ban -- The Loai -- Gia sach -- So quyen sach" << endl << endl;
                cout << tenSach[i] << " -- " << tacGia[i] << " -- " << maSach[i] << " -- " << nhaXuatBan[i] << " -- " << namXuatBan[i] << " -- " << theLoai[i] << " -- " << giaSach[i] << " -- " << soQuyenSach[i] << endl;
                system("pause");
                break;
            }
            else if(i == b) cout << endl << "Khong co sach ban dan tim!" << endl << endl;
        }
    }
}