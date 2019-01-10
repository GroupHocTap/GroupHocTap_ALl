/*BTCH4.CPP
Name: Nông Duy Khánh
Date: 25/10/2018
*/
#include <iostream>
using namespace std;
int main ()
{
	//khai bao bien
	int x;
	int y;
	int menu;
	int nCong;
	int nTru;
	int nNhan;
	int nChia;
	//input
	cout << "nhap x: ";
	cin >> x;
	cout << "nhap y: ";
	cin >> y;
	TT: cout << "nhap menu: ";
	cin >> menu;
	switch (menu)
	{
	case 1:
		cout << "phep cong";
		nCong = x + y;
		cout << "gia tri phep cong" << nCong << endl;
		break;
	case 2:
		cout << "phep tru";
		nTru = x - y;
		cout << "gia tri phep tru" << nTru << endl;
		break;
	case 3:
		cout << "phep nhan";
		nNhan = x * y;
		cout << "gia tri phep nhan" << nNhan << endl;
		break;
	case 4:
		if (y == 0)
		{
			cout << "khong chia duoc" << endl;
		}
		cout << "phep chia";
		nChia = x / y;
		cout << "gia tri phep chia" << nChia << endl;
		break;
	default:
		if (menu > 4)
		{
			cout << " nhap sai menu ";
			goto TT;
		}
	}





	system("pause");
	return 0;
}
