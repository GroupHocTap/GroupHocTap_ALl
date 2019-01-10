#include <iostream>
using namespace std;
int main()
{
	//khai bao bien
	int nNum = 0;
	long nTong = 0;

	//input
	cout << "nhap vao mot so nguyen duong: ";
	cin >> nNum;

	while (nNum <= 0)
	{
	cout << "nhap vao mot so nguyen duong: ";
	cin >> nNum;
	}
	//tinh tong cac so le
	/*for (int i = 1; i <= nNum; i += 2)
	{
		nTong += i;
	}*/
	int i = 1;
	while (i <= nNum)
	{
		nTong += 1;
		i += 2;
	}
	//in ket qua
	cout << "Tong A=" << nTong << endl;

	system("pause");
	return 0;
}