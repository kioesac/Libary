#pragma once
#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include "menu.h"
using namespace std;

//Extra:

void nhapThongTinDocGia(docgia* a, int& x);
void nhapThongTinSach(sach* b, int& y);

//Thuat toan:

int totalDays(char check2[20], int monthDays[13]);

//Phan doc gia:

void danhSachDocGia(docgia a[100], int x);
void themDocGia(docgia a[100], int& x);
void chinhSuaDocGia(docgia a[100], int x);
void xoaDocGia(docgia a[100], int& x);
void timKiemBangCCND(docgia a[100], int x);
void timKiemBangHoTen(docgia a[100], int x);

//Phan sach:

void danhSachSach(sach b[100], int y);
void themSach(sach b[100], int& y);
void chinhSuaSach(sach b[100], int y);
void xoaSach(sach b[100], int& y);
void timKiemBangISBN(sach b[100], int y);
void timKiemBangTenSach(sach b[100], int y);

//Muon tra sach:

void createTicket(docgia a[100], sach b[100], borrowticket c[100], int x, int y, int& z, int monthDays[13]);
void returnTicket(sach b[100], borrowticket c[100], int y, int z, int monthDays[13]);


