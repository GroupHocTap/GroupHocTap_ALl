#include<stdio.h>
#include <iostream>
using namespace std;

int main() {
	int num, r, sum = 0, temp;

	cout << "Enter a number: ";
	cin >> num;

	for (temp = num; num != 0; num = num / 10)
	{
		r = num % 10;
		sum = sum * 10 + r;
	}
	if (temp == sum)
	{
		cout << temp << " la so doi xung";
	}
	else
	{
		cout << temp << " khong la so doi xung";
	}
	system("pause");
	return 0;
}
