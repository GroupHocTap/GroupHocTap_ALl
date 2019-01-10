/*BTCH4.CPP
Name: Nông Duy Khánh
Date: 25/10/2018
*/
#include<iostream>
using namespace std;
int main()
{
	//khai bao bien
	int nKm = 0;
	int nPay = 0;
	//input
	cout << "nhap so km: ";
	cin >> nKm;
	//processing
	if (nKm <= 1)
	{
		nPay = 15000;

	}
	else if (nKm <= 5)
	{
		nPay = 13500 + (nKm - 1) * 15000;
	}
	else if (nKm <= 120)
	{
		nPay = 15000 + 4 * 13500 + (nKm - 5) * 11500;
	}
	else
	{
		nPay = 0.9*(13500 + 4 * 13500 + (nKm - 5) * 11500);
	}
	//output
	cout << "tien phai tra la: " << nPay << endl;
	system("pause");
	return 0;
}
