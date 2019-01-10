/*BTCH4.CPP
Name: Nông Duy Khánh
Date: 25/10/2018
*/
#include<iostream>
using namespace std;
int main()
{
	//khai bao bien
	int nNum = 0;
	//input
TT: cout << "nhap vao mot so nguyen: ";
	cin >> nNum;
	//kiem tra dieu kien nhap
	if (nNum < 1 || nNum >100)
	{
		cout << "vui long nhap so nguyen tu 1 den 100" << endl;
		goto TT;
	}
	if (nNum % 6 == 0)
	{
		cout << " chia het cho 6 " << endl;
	}
	else { cout << "khong chia het cho 6:" << endl; }
	system("pause");
	return 0;
}
