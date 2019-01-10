#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//khai bao bien
	int nN = 0;
	//input
	cout << "nhap gia tri num: ";
	cin >> nN;
	//PROSSECING
	do
	{
		cout << "nhap gia tri num: ";
		cin >> nN;
	} while (nN <= 0);
	//kiem tra SCP
	bool bFlag = false;
	for (int i = 1; i <= sqrt(nN); i++)
	{
		if (i*i == nN)
		{
			bFlag = true;
			break;

		}
	}
	//in ket qua
	if (bFlag == true)
	{
		cout << "gia tri là SCP: ";
	}
	else
	{
		cout << "gia tri khong là SCP: ";
	}

	system("pause");
	return 0;
}
