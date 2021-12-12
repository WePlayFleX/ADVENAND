#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\nYour coordinates: " << x << ", " << y;
		cout << "\nChoose direction (n, s, e, w): ";

		dir = getche();
		switch (dir)
		{
		case 'n':
			y--;
			break;
		case 's':
			y++;
			break;
		case 'e':
			x++;
			break;
		case 'w':
			x--;
			break;
		default:
			cout << "Try once more\n ";
			break;
		}

		if (x == 7 && y == 11)
		{
			cout << "\nYou found the treasure!\n ";
			exit(0);
		}
	}

	system("pause");
	return 0;
}