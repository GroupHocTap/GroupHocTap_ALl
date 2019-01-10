
#include <iostream>
#include<string>
using namespace std;
#define max 100
#define size 100
//void nhapMang(int arrA[], int &nSpt);
//void xuatMang(int arrM[], int nSpt);
int timsoFi(int nN);

void main()
{
	//int arrM[max];
	//int nSpt = 0;

	int nN = 0;

	/*char chuThuong[size];
	char chuHoa[size];
	cout << "nhap ten ban viet lien khong dau: ";
	cin >> chuThuong;
	for (int i = 0; i < sizeof(chuThuong); i++)
	{
		chuHoa[i] = chuThuong[i] - 32;
	}
	cout << "chu thuong: " << chuThuong << endl;
	cout << "chu hoa: " << chuHoa << endl;*/

	/*nhapMang(arrM, nSpt);
	cout << "xuat mang" ;
	xuatMang(arrM, nSpt);*/

	timsoFi(nN);

	system("pause");
}

//void nhapMang(int arrA[], int &nSpt)
//{
//	do
//	{
//		cout << "nhap n so phan tu: " ;
//		cin >> nSpt;
//	} while (nSpt < 1 || nSpt > max);
//	for (int i = 0; i < nSpt; i++)
//	{
//		cout << "nhap phan tu thu A[" << i << "]" ;
//		cin >> arrA[i];
//	}
//}
//void xuatMang(int arrM[], int nSpt)
//{
//	for (int i = 0; i < nSpt; i++)
//	{
//		cout << arrM[i] << "\t";
//	}
//}

int timsoFi(int nN)
{
	int F0 = 1, F1 = 1;
	int Fn = 0;
	cout << "nhap gia tri num";
	cin >> nN;

	if (nN >= 3)
	{
		for (int i = 1; i <= nN - 2; i++)
		{
			Fn = F0 + F1;
			F0 = F1;
			F1 = Fn;
		}
	}
	return Fn;
}