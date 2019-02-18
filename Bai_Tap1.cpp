#include"stdio.h"
#include"iostream"
#include"conio.h"
#define max 100
using namespace std;

struct SINHVIEN // khai bao cau trucsinh vien
{
	char cHoTen[max];
	char cLop[max];
	float fM1, fM2, fTongTB;
}; typedef SINHVIEN SV;
SV Diem[max];
int n;
void Nhap(SINHVIEN SV[], int &n) // nhap du lieu sinh vien
{
	cout << "so luong sinh vien: ";
	cin >> n;
	cout << "ho so sinh vien: ";
	for (int i = 1; i <= n; i++)
	{
		cout << "Sinh vien thu [ " << i << " ]";
		cin.ignore(1);
		cout << "\nHo va Ten: ";
		cin.getline(SV[i].cHoTen, max);
		cout << "\nLop: ";
		cin.getline(SV[i].cLop, max);
		cout << "\nDiem Mon 1: "; cin >> SV[i].fM1;
		cout << "\nDiem Mon 2: "; cin >> SV[i].fM2;
	}
}
void Xuat(SINHVIEN SV[], int n) 
{
	cout << "\tHoTEn \tLop \tDiemM1 \tDiemM2 \n";
	for (int i = 1; i <= n; i++)
	{
		cout << SV[i].cHoTen;
		cout  << SV[i].cLop;
		cout << SV[i].fM1;
		cout << SV[i].fM2;
	}
}
int DemDiemTB(SINHVIEN SV[], int n)
{
	int nDem = 0;
	for (int i = 1; i <= n; i++)
		if ((SV[i].fM1 + SV[i].fM2) / 2.0 >= 5.0)
		{
			nDem++;
		}
	return nDem;
}
void main()
{
	SINHVIEN SV[max];
	Nhap(SV, n);
	Xuat(SV, n);
	cout << "\n so sinh vien co diem trung binh tren 5: " << DemDiemTB(SV,n);
	_getch();
}