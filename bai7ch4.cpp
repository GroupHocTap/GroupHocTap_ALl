/*BTCH4.CPP
Name: Nông Duy Khánh
Date: 28/10/2018
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//khai bao bien
	int nT = 0;
	int nNam = 1900;
	int nNgay = 0;
	//input
	cout << "nhap vao thang: ";
	cin >> nT;
	//processing
	switch (nT)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nNgay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		nNgay = 30;
		break;
	case 2:
		cout << "nhap nam: ";
			cin >> nNam;
		if (((nNam % 4 == 0) && (nNam % 100 != 0)) || (nNam%400==0))
		{
			nNgay = 29;
		}
		else
		{
			nNgay = 28;
		}
		break;
	}
	cout << "thang co" << nNgay << "ngay" << endl;
	system("pause");
	return 0;
}
