#pragma once
void menuChinh();
void menuDocGia();
void menuSach();
void menuThongKe();

struct docgia
{
    char name[50];
    char id[15];
    char sex[5];
    char birthDate[15];
    char address[100];
    char email[50];
    char subscriptionDate[15];
    char subscriptionExpirationDate[15];
    int subscriptionId;
};

struct sach
{
    char name[50];
    char writer[50];
    char id[20];
    char publisher[50];
    char releaseYear[10];
    char type[20];
    int price;
    int quantity;
};

struct borrowticket
{
    char name[50];
    char bookName[100][50];
    char borrowDate[15];
    char returnDate[15];
    char realReturnDate[15];
    int tienPhat = 0;
    bool lateReturn = false;
    bool done = false;
    bool matSach = false;
};