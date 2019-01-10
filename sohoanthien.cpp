#include <iostream>
using namespace std;

// Kiểm tra Số Hoàn Thiện
// Input : 1 số nguyên dương
// Output :
// True : Là số hoàn thiện
// False : Không là số hoàn thiện
bool Check_SHT(int nNum)
{
	int S = 0;
	for (int i = 1; i < nNum; i++)
		if (nNum % i == 0)
		{
			S += i;  // S = S + i
		}
	if (S == nNum)
	{
		return true; // Là số hoàn thiện
	}
	 return false;     // Không là số hoàn thiện
}

int main()
{
	int nNum;

	cout << "nNum = ";
	cin >> nNum;

	bool result = Check_SHT(nNum);

	if (result == true)
	{
		cout << "La SHT";
	}
	else
	{
		cout << "Khong la SHT";
	}
	cout << endl;
	system("pause");
}