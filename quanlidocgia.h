#pragma once
#include <iostream>
#include <string.h>
void danhSachDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50]);                               //Liet ke ten doc gia
void themDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50]);                                   //Them ten doc gia
void chinhSuaThongTinDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50]);                       //Chinh sua ten mot doc gia
void xoaThongTinMotDocGia(int& a, char tenDocGia[100][100], char soCMND[100][21], char gioiTinh[100][10], char ngayThangNamSinh[100][20], char address[100][100], char email[100][50]);                         //Xoa thong tin mot doc gia
void timDocGiaBangCMND(int& a, char tenDocGia[100][100], char soCMND[100][21]);                                                                                                                                 //Tim kiem doc gia bang so CMND

