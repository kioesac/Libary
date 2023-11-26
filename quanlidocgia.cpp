#include "quanlidocgia.h"
using namespace std;
void danhSachDocGia(char tenDocGia[100][100])
{
    cout << endl << "Danh sach doc gia hien tai: " << endl << endl;
    for(int i = 0; tenDocGia[i][0] = '\0'; i++)
    {
        for(int j = 0; tenDocGia[i][j] = '\n'; j++)
        {
            cout << tenDocGia[i][j];
        }
        cout << endl;
    }
}
void themDocGia(int& a, char tenDocGia[100][100])
{
    a += 1;                                                                 //a la so hang = so luong doc gia
    int i = 0;                                                              //i la so cot = so luong chu cai
    char b[100];
    cout << endl << "Nhap ten doc gia moi: ";
    cin.getline(b, 100);
    cout << b << endl << endl;
}