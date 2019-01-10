#include <iostream>
#include <math.h>
using namespace std;
int main() {
	//Khai bao bien 
	int nSoNguyen = 0;
	int nTong = 0;
	//input
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> nSoNguyen;
	} while (nSoNguyen <= 0);
	//kiem tra
	for (int i = 1; i < nSoNguyen; i++)
	{
		if (nSoNguyen%i == 0)
		{
			nTong = nTong + i;
		}
	}
	//output
	if (nTong == nSoNguyen)
	{
		cout << "La so hoan hao" << endl;
	}
	else
	{
		cout << "Ko la so hoan hao" << endl;
	}
	system("pause");
	return 0;
}