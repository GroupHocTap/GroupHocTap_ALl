#include <iostream>
#include <math.h>

using namespace std;
//void SoNT(int nSoNguyen);

int main()
{
	//int nSoNguyen = 0;
	//SoNT(nSoNguyen);
	/*int num, r, sum = 0, temp;
	cout << "Enter a number: ";
	cin >> num;
	for (temp = num; num != 0; num = num / 10)
	{
		r = num % 10;
		sum = sum * 10 + r;
	}
	if (temp == sum){
		cout << temp << " la so doi xung";
	}else
	{
		cout << temp << " khong la so doi xung";
	}*/
	int nSoNguyen = 0;
	int nTong = 0;
	//input
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> nSoNguyen;
	} while (nSoNguyen <= 0);
	for (int i = 1; i < nSoNguyen; i++)
	{
		if (nSoNguyen%i == 0)
		{
			nTong = nTong + i;
		}
	}
	if (nTong == nSoNguyen)
	{
		cout << "La so hoan hao" << endl;
	} else
	{
		cout << "Ko la so hoan hao" << endl;
	}

	system("pause");
	return 0;
}

void SoNT(int nSoNguyen)
{
	bool bCo = true;
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> nSoNguyen;
	} while (nSoNguyen < 1);
	if (nSoNguyen == 1)
	{
		bCo = false;
	}
	for (int i = 2; i< nSoNguyen; i++)//Kiem tra so nguyen to
	{
		if (nSoNguyen%i == 0)
		{
			bCo = false;
			break;
		}
	}
	if (bCo == true) //output
	{
		cout << "La so nguyen to" << endl;
	}
	else
	{
		cout << "KHong phai so nguyen to" << endl;
	}
}