// Hồ Đặng An Bình
// 22/11/2018
 
#include <iostream>
using namespace std;
bool checkSquareNum(int nN);

int inputNum();

int main()
{
	int nN = 0;
	int nNum = 0;
	nNum = inputNum() ;

	if (checkSquareNum(nN) == true)
	{
		cout << "la SCP: \n ";
	}
	else
	{
		cout << "khong la SCP: \n ";
	}
	cout << checkSquareNum(nNum) << endl;
	system("pause");
	return 0;
}
bool checkSquareNum(int nN)
{
	bool bFlag = false;
	for (int i = 1; i <= sqrt(nN); i++)
	{
		if (i*i == nN)
		{
			bFlag = true;
			break;

		}
	}
	return bFlag;
}
int inputNum()
	{
		int nN = 0;
		do 
		{
			cout << "Nhap so nguyen duong: ";
			cin >> nN;
		} while (nN < 1);
		return nN;
}