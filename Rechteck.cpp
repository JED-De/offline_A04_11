#include <iostream>
using namespace std;

int main()
{
	unsigned int breite;
	unsigned int hoehe;
	do
	{
		cout << "Bitte geben Sie die Breite des Rechtecks ein: ? ";
		cin >> breite;
	} while (breite < 2);

	do {
		cout << "Bitte geben Sie die Hoehe des Rechtecks ein: ? ";
		cin >> hoehe;
	} while (hoehe < 2);

	for (unsigned int i = 1; i <= hoehe; i++)
	{
		for (unsigned int j = 1; j <= breite; j++)
		{
			if (i == 1 || i == hoehe || j == 1 || j == breite)
			{
				cout << '*';
			}
			else
			{
				cout << '+';
			}
		}
		cout << endl;
	}

	system("PAUSE");
	return 0;
}