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
		cout << "ÃÑ" << endl;
	}
	else if (item == 2)
	{
		cout << "Ä®" << endl;
	}
	else if (item == 3)
	{
		cout << "ÇÁ¶óÀÌÆÒ" << endl;
	}
	else
	{
		cout << "ÁÖ¸Ô" << endl;
	}

	return 0;
}