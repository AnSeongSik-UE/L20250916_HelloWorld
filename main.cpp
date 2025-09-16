#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	int PlayerInput = 0;

	//1. °¡À§
	//2. ÁÖ¸Ô
	//3. º¸ÀÚ±â
	cin >> PlayerInput;

	srand(time(nullptr));

	int EnemyInput = (rand() % 3) + 1;

	if (PlayerInput == EnemyInput)
	{
		cout << "¹«½ÂºÎ" << endl;
	}
	else if (PlayerInput == 1) // °¡À§
	{
		if (EnemyInput == 3)
		{
			cout << "½Â¸®" << endl;
		}
		else if (EnemyInput == 2)
		{
			cout << "ÆÐ¹è" << endl;
		}
	}
	else if (PlayerInput == 2) // ÁÖ¸Ô
	{
		if (EnemyInput == 1)
		{
			cout << "½Â¸®" << endl;
		}
		else if (EnemyInput == 3)
		{
			cout << "ÆÐ¹è" << endl;
		}
	}
	else if (PlayerInput == 3) // º¸ÀÚ±â
	{
		if (EnemyInput == 2)
		{
			cout << "½Â¸®" << endl;
		}
		else if (EnemyInput == 1)
		{
			cout << "ÆÐ¹è" << endl;
		}
	}

	return 0;
}