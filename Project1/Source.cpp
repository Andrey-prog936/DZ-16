#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include "function.h"
#include "coloring.h"

using namespace std;

int main()
{
	podia zap;

	int a = 0;
	do
	{

		cout << "\tMenu" << endl;
		cout << "1 - Add podia" << endl;
		cout << "2 - Show podii" << endl;
		cout << "3 - FULL Exit ";
		red
			cout << "<-(WARNING)->" << endl << endl;
		def
			////////////////////////////
			cout << "Select action: ";
		cin >> a;
		switch (a)
		{
		case 1:
		{
			cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
			addP(zap);
			Sleep(600);
			system("cls");
		}
		break;
		case 2:
		{
			Show(zap);
			cout << endl;
		}
		break;
		case 3:
		{
			Sleep(300);
			delete[] SA;
			return 1;
		}
		break;
		default: {
			cout << "Error 404" << endl;
			break;
		}



		}
	} while (true);


	system("pause");
	return 0;
}