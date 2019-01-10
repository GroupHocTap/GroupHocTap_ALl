#include<iostream>
using namespace std;
bool ktraChuThuong(char kitu);
bool ktraChuHoa(char kitu);
bool ktraSo(char kitu);

int main()
{
	char kitu;
	cout << "Nhap 1 ki tu: ";
	cin >> kitu;

	if (ktraChuThuong(kitu))
	{
		cout << " La chu thuong\n";
	}
	else
	{
		if (ktraChuHoa(kitu))
		{
			cout << " La chu hoa\n";
		}
		else
		{
			if (ktraSo(kitu))
			{
				cout << " La so\n";
			}
			else
			{
				cout << " Khong la chu thuong, chu hoa, so\n";
			}
		}
	}
	system("pause");
	return 0;
}

bool ktraChuThuong(char kitu)
{
	bool bFlag = true;
	if (kitu >= 'a' && kitu <= 'z')
	{
		return true;
	}
	else
	{
		return false;
	}
	return bFlag;
}

bool ktraChuHoa(char kitu)
{
	bool bFlag = true;
	if (kitu >= 'A' && kitu <= 'Z')
	{
		return true;
	}
	else
	{
		return false;
	}
	return bFlag;
}

bool ktraSo(char kitu)
{
	bool bFlag = true;
	if (kitu >= '0' && kitu <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
	return bFlag;
}