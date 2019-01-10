// HHồ Đặng An Bình
// 22/11/2018

#include <iostream>
#include <math.h>
using namespace std;
int inputNum();	// nhap so
bool checkPrimeNum(int nN);

int main()
{
	//Khai bao bien 
	int nSoNguyen = 0;
	int nNumA = 0;
	nNumA = inputNum();

	if (checkPrimeNum(nNumA) == true)
	{
		cout << "La so nguyen to \n" << endl;
	}
	else
	{
		cout << "KHong phai so nguyen to \n" << endl;
	}
	system("pause");
	return 0;
}


//Kiem tra so nguyen to
bool checkPrimeNum(int nSoNguyen)
{
	bool bFlag = true;
	if (nSoNguyen == 1)
	{
		bFlag = false;
	}
	else
	{
		for (int i = 2; i < nSoNguyen; i++)
		{
			if (nSoNguyen%i == 0)
			{
				bFlag = false;
				break;
			}
		}
	}
	return bFlag;
}
//nhap so nguyen duong
int inputNum()
{
	int nN = 0;
	do {
		cout << "Nhap so nguyen duong: ";
		cin >> nN;
	} while (nN < 1);
	return nN;
}
	
