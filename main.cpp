#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	int item = 3;

	cin >> item;

	if (item == 1)
	{
		cout << "��" << endl;
	}
	else if (item == 2)
	{
		cout << "Į" << endl;
	}
	else if (item == 3)
	{
		cout << "��������" << endl;
	}
	else
	{
		cout << "�ָ�" << endl;
	}

	return 0;
}