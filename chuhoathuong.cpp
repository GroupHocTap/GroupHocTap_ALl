#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
#define size 100
int main() {
	char chuThuong[size] ;
	char chuHoa[size];
	cout << "nhap ten ban viet lien khong dau: ";
	cin >> chuThuong;

	for (int i = 0; i < sizeof(chuThuong); i++)
	{
		chuHoa[i] = chuThuong[i] - 32;
	}
	cout << "chu thuong: " << chuThuong << endl;
	cout << "chu hoa: " << chuHoa;
	system("pause");
	return 0;
}
/*for (int i = 0; i < sizeof(chuThuong); i++)
{
if (chuThuong[i] >= 'a' && chuThuong[i] <= size)
{
chuHoa[i] = chuThuong[i] - 32;
}
else
{
chuHoa[i] = chuThuong[i];
}
}*/