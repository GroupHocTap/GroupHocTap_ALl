//5/1/2018
//

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100
//int testFibonanci(int nN);
void nhapMang(int arrM[], int &nSpt);
void xuatMang(int arrM[], int nSpt);
int kTraSCP(int nN);
void ScpMang(int arrM[], int nSpt);
int main()
{
	/*int nN = 0;
	cout << "nhap mot so phan tu thu hang: ";
	cin >> nN;
	cout << "day fibonacci: ";
	testFibonanci(nN);*/
	int arrM[MAX];
	int nSpt = 0;
	nhapMang(arrM, nSpt);
	xuatMang(arrM, nSpt);
	
	//testFibonanci(nN);
		
	ScpMang(arrM, nSpt);

	system("pause");
	return 0;
}

//int testFibonanci(int nN)
//{
//	int F0 = 1;
//	int F1 = 1;
//	int Fn = 0;
//	if (nN >= 3)
//	{
//		for (int i = 1; i <= nN ; i++)
//		{
//			F0 = F1;
//			F1 = Fn;
//			Fn = F0 + F1;
//			cout << Fn<<"\t";
//		}
//		
//	}
//	return 0;
//}
void nhapMang(int arrM[], int &nSpt)
{
	do
	{
		cout << "nhap sp phan tu: ";
		cin >> nSpt;
	} while (nSpt<1 || nSpt>MAX);
	for (int i = 0; i < nSpt; i++)
	{
		cout << "arrM[" << i << "]=";
		cin >> arrM[i];
	}
}
void xuatMang(int arrM[], int nSpt)
{
	for (int i = 0; i < nSpt; i++)
	{
		cout << arrM[i] << "\t";
	}
}
int kTraSCP (int nN)
{
	for (int i = 1; i <= sqrt(nN); i++)
	{
		if (i*i == nN)
		{
			cout << nN;;
		}
	}
	return 0;
}
void ScpMang(int arrM[], int nSpt)
{
	for (int i = 0; i < nSpt; i++)
	{
		if (kTraSCP(arrM[i]))
		{
			cout << arrM[i] << "\t";
		}
	}

}