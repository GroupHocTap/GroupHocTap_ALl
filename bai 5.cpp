// Hồ Đặng An Bình
// 22/11/2018

#include <iostream>
using namespace std;

bool checkF(int nN);
int inputNum();


int main()
{
	int nN = 0;
	int fi, f1, f2;
	
	
		fi = f1 + f2;
		f1 = f2;
		f2 = fi;
cout << "vay so" << nN << "Fibonaci dau tien la: " << endl;
		cin >> nN;

	system("pause");
	return 0;
}

int inputNum()
{
	int nN = 0;
	do
	{
		cout << "nhap so bat ky: ";
		cin >> nN;
	} while (nN < 1);
	return nN;
}
bool checkF (int nN)
{
int f2 = 1;
		int f1 = 0;
		fi = f2;
		for (int i = 1; i <= nN; i++)
		{
	cout << fi << " ";

	}
		return fi;
}

