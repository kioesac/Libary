#pragma once
#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

//Phan doc gia:

void danhSachDocGia(int& a, char tenDocGia[100][30], char soCMND[100][15], char gioiTinh[100][5], char ngayThangNamSinh[100][15], char address[100][50], char email[100][30], char ngayLapThe[100][15], char ngayHetHanThe[100][15]);                                                      //Liet ke ten doc gia
void themDocGia(int& a, char tenDocGia[100][30], char soCMND[100][15], char gioiTinh[100][5], char ngayThangNamSinh[100][15], char address[100][50], char email[100][30], char ngayLapThe[100][15], char ngayHetHanThe[100][15]);                                                          //Them ten doc gia
void chinhSuaThongTinDocGia(int& a, char tenDocGia[100][30], char soCMND[100][15], char gioiTinh[100][5], char ngayThangNamSinh[100][15], char address[100][50], char email[100][30], char ngayLapThe[100][15], char ngayHetHanThe[100][15]);                                              //Chinh sua ten mot doc gia
void xoaThongTinMotDocGia(int& a, char tenDocGia[100][30], char soCMND[100][15], char gioiTinh[100][5], char ngayThangNamSinh[100][15], char address[100][50], char email[100][30], char ngayLapThe[100][15], char ngayHetHanThe[100][15]);                                                //Xoa thong tin mot doc gia
void timDocGiaBangCMND(int& a, char tenDocGia[100][30], char soCMND[100][15]);                                                                                                                                                      //Tim kiem doc gia bang so CMND

//Phan sach:

void themSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100]);
void danhSachSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100]);
void chinhSuaThongTinMotQuyenSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100]);
void xoaThongTinSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100]);
void timSachBangISBN(int& b, char tenSach[100][50], char maSach[100][20]);
void timSachTheoTenSach(int& b, char tenSach[100][50], char tacGia[100][30], char maSach[100][20], char nhaXuatBan[100][20], char namXuatBan[100][5], char theLoai[100][20], char giaSach[100][20], char soQuyenSach[100][100]);

//Muon va tra sach:

void phieuMuonSach(int a, int b, char tenDocGia[100][30], char sachDangMuon[100][50], char tenSach[100][50],char ngayMuonSach[100][15], char ngayTraSach[100][15]);
void phieuTraSach(int a, int b, int monthDays[12], char tenDocGia[100][30], char maSach[100][20], char giaSach[100][20], char sachDangMuon[100][50], char tenSach[100][50], char ngayMuonSach[100][15], char ngayTraSach[100][15], char ngayTraSachThucTe[100][15]);


