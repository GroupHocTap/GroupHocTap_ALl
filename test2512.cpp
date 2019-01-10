#include <iostream>
#define max 100
using namespace std;
void KTM(int arrA[], int &nN);//ktra mang co bao so nguyen to
void SoNT(int &nSpt);
void NhapMang(int arrM[], int &nSpt);
void Xuatmang(int arrM[], int &nSpt);

void main()
{
	//Khai bao bien 
	int arrM[max];
	int nSpt = 0;
	int nN = 0;
	NhapMang(arrM, nSpt);
	Xuatmang(arrM, nSpt);
	SoNT(nSpt);
	KTM(arrM, nN);
	system("pause");
}
void NhapMang(int arrM[], int &nSpt)
{
	do {
		cout << "nhap so phan tu ";
		cin >> nSpt;
	} while (nSpt <1 || nSpt>max);

	for (int i = 0; i < nSpt; i++)
	{
		cout << "phan tu thu arrM [" << i << "]" << endl;
		cin >> arrM[i];
	}
}
void Xuatmang(int arrM[], int &nSpt)
{
	for (int i = 0; i < nSpt; i++)
	{
		cout << arrM[i] << "\t";
	}
}
void SoNT(int &nSpt)
{

	bool bCo = true;
	//Kiem tra so nguyen to
	for (int i = 2; i <= sqrt(nSpt); i++)
	{

		if (nSpt % i == 0)
		{
			bCo = false;
			break;
		}
	}
	if (bCo == true) //output
	{
		cout << nSpt << ": La so nguyen to" << endl;
	}
	else
	{
		cout <<nSpt<< ": KHong phai so nguyen to" << endl;
	}
}
	void KTM(int arrM[],int &nN)//ktra mang co bao so nguyen to
	{
		for (int i = 0; i <= arrM[i]; i++)
		{
			nN = arrM[i];
			SoNT(nN);
		}
	}

