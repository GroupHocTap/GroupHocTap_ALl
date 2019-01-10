#include<iostream>
using namespace std;
//khai bao prototype (tiền hàm)
//int inputNum(int nNum);
//int inputNum();	//ham nhap so nguyen duong >=1
void inputNum(int &nNum);
int timUSCLN(int nNum1, int nNum2); //ham tim USCLN
void hoanVi(int &nA, int &nB); // doi gia tri 2 so nguyen

int main()
{

	int nNum1 = 0;
	int nNum2 = 0;
	int nUSCLN = 0;

	//Kiem tra so nhap
	inputNum(nNum1);
	inputNum(nNum2);
	//hoan vi
	hoanVi(nNum1, nNum2);
	cout << "nNum1 sau hoan vi= " << nNum1 << endl;
	cout << "nNum2 sau hoan vi= " << nNum2 << endl;

	//Tim USCLN
	nUSCLN = timUSCLN(nNum1, nNum2);
	cout << "nNum1 sau vong lap= " << nNum1 << endl;
	cout << "nNum2 sau vong lap= " << nNum2 << endl;
	cout << "USCLN(" << nNum1 << "," << nNum2 << ") =" << nUSCLN << endl;
	cout << "\n";
	system("pause");
	return 0;
}

//ham hoan vi
void hoanVi(int &nA, int &nB)
{
	int nT = 0;
	nT = nA;
	nA = nB;
	nB = nT;
}
//ham nhap
//int inputNum(int nNum)
//{
//	do
//	{
//		cout << "Nhap so nguyen duong: ";
//		cin >> nNum;
//	} while (nNum < 1);
//	return nNum;
//}
//int inputNum()
//{
//	int nNum = 0;
//	do
//	{
//		cout << "Nhap so nguyen duong: ";
//		cin >> nNum;
//	} while (nNum < 1);
//	return nNum;
//}
void inputNum(int &nNum)
{
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> nNum;
	} while (nNum < 1);

}
//ham tim USCLN
int timUSCLN(int nNum1, int nNum2)
{
	while (nNum1 != 0 && nNum2 != 0)
	{
		if (nNum1 >= nNum2)
		{
			nNum1 = nNum1 % nNum2;
		}
		else
		{
			nNum2 = nNum2 % nNum1;
		}
	}
	int nUSCLN = nNum1 + nNum2;
	return nUSCLN;
}