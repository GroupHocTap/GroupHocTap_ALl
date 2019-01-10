#include <iostream>
#include <math.h>

using namespace std;
void SoNT(nSoNguyen);

int main() {
	//Khai bao bien 
	int nSoNguyen = 0;
	bool bCo = true;

	//input
	

	system("pause");
	return 0;
}

void SoNT(nSoNguyen)
{
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> nSoNguyen;
	} while (nSoNguyen < 1);

	if (nSoNguyen == 1)
	{
		bCo = false;

	}
	//Kiem tra so nguyen to
	for (int i = 2; i< nSoNguyen; i++)
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