#include <stdio.h>
#include<iostream>
#include <conio.h>
using namespace std;
struct SinhVien // khai bao thong tin sinh vien
{
	char cHoTen[50];
	float fM1, fM2, fM3, fTong;
}; SinhVien SV;
void Nhap(SinhVien &SV) //ham nhap thong tin xin vien
{
	cin.ignore(1);
	cout << "\nHo VA TEn: ";
	cin.getline(SV.cHoTen, 50);
	cout << "\n Mon 1: "; cin >> SV.fM1; //nhap diem mon 1
	cout << "\n Mon 2: "; cin >> SV.fM2; //nhap diem mon 2
	cout << "\n Mon 3: "; cin >> SV.fM3; //nhap diem mon 3
	cout << endl;
}
float TongDiem(SinhVien &SV) // ham tinh tong diem 3 mon
{
	SV.fTong = SV.fM1 + SV.fM2 + SV.fM3; // tong 3 mon
		return SV.fTong;
 }
void Xuat(SinhVien &SV) // ham xuat diem nhung sinh vien co diem tong >=15
{
	if (TongDiem(SV) >= 15) // neu diem tong >=15 thi xuat ra man hinh
	{
		cout << "\nHo VA Ten: " << SV.cHoTen;
		cout << "\nTong Diem: " << TongDiem(SV);
		cout << endl;
	}
}
void main() 
{
	SinhVien DS[20];
	int nSiSo;
	cout << "\nSi so : "; cin >> nSiSo;
	for (int i = 1; i <= nSiSo; i++) // vong lap
	{
		cout << "\nsinh vien thu [ " << i << " ]";
		Nhap (DS[i]);
	}
	cout << " ==== ket qua ==== " << endl;
	for (int i = 1; i <= nSiSo; i++)
		Xuat(DS[i]);
	_getch();
}