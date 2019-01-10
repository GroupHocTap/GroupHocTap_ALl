// ho dang an binh 
// 17/12/2018

#include <iostream>
using namespace std;

int main()
{
	float fDtb = 0.0; //bien fDtb

	// nhap diem trung binh
	cout << "nhap diem trung binh: ";
	cin >> fDtb;
	// xuất kết quả
	if (fDtb >= 9)
	{
		cout << "Kqua: XuatSac";
		cout << endl;
	}
	else if (fDtb >= 8)
	{
		cout << "Kqua: Gioi";
		cout << endl;
	}
	else if (fDtb >= 6.5)
	{
		cout << "Kqua: Kha";
		cout << endl;
	}
	else if (fDtb >= 5)
	{
		cout << "Kqua: TrungBinh";
		cout << endl;
	}
	else
	{
		cout << "Kqua: Yeu";
		cout << endl;
	}
	system("pause");
}
