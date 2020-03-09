#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include "function.h"

using namespace std;
HANDLE colr = GetStdHandle(STD_OUTPUT_HANDLE);
#define DefCol SetConsoleTextAttribute(colr, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
#define green SetConsoleTextAttribute(colr,FOREGROUND_GREEN);
#define orange SetConsoleTextAttribute(colr,FOREGROUND_GREEN | FOREGROUND_RED);
#define red SetConsoleTextAttribute(colr,FOREGROUND_RED);

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
		cout << "<-(WARNING)->" << endl;
		DefCol
		////////////////////////////
		cin >> a;
		switch (a)
		{
		case 1:
		{
			addP(zap);
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