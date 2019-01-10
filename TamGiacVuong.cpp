// ho dang an binh
// 17/12/2018

#include <iostream>
using namespace std;

void main()
{
	int nH;
	int z = 1;
	cout << "nhap chieu cao tam giac: ";
	cin >> nH;

	for (int i = 0; i < nH; i++)
	{
		for (int j = nH; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < z; k++)
		{
			cout << " * ";
		}
		z += 1;
		cout << endl;
	}

	system("pause");
}