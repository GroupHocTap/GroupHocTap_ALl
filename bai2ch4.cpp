#include <iostream>
using namespace std;
int main()
{
	//Khai bao
	float DTB = 0.0;
	//nhap
	cout << "Nhap diem trung binh: ";
	cin >> DTB;
	//tinh
	if (0 <= DTB && DTB < 3)
	{
		cout << "xep loai sinh vien la: Kem ";
	}
	if (3 <= DTB && DTB < 5)
	{
		cout << "xep loai sinh vien la: Yeu";
	}
	if (5 <= DTB && DTB < 6.5)
	{
		cout << "xep loai sinh vien la: Trung binh kha";
	}
	if (6.5 <= DTB && DTB < 8)
	{
		cout << "xep loai sinh vien la: Kha";
	}
	if (8 <= DTB && DTB < 9)
	{
		cout << "xep loai sinh vien la: gioi";
	}
	if (9 <= DTB && DTB < 10)
		cout << "xep loai sinh vien la: xuat xac";
	system("pause");
	return 0;
}


