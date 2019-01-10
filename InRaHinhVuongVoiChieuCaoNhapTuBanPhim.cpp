// ho dang an binh
// 16/12/2018

#include<iostream>
using namespace std;

//in ra hinh vuong voi chieu cao nhap tu ban phim
void main()
{
	char H;

	cout << "nhap chieu cao h: ";
	cin >> H;

	for (char i = 1; i <= H; i++)
	{
		for (char j = 1; j <= H; j++)
		{
			cout << i;
		}
		cout << endl;
	}
	system("pause");
}


