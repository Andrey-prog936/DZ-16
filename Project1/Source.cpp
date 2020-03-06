#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include "add.h"

using namespace std;



int main()
{
	string name;
	string des;
	string day;
	string time;
	string vash;
	int a = 0;
	do
	{
		cout << "1 - Add podia" << endl;
		cout << "2 - Show podii" << endl;
		cout << "3 - Importance" << endl;
		////////////////////////////
		cin >> a;
		switch (a)
		{
		case 1:
		{
			addP(name, des, day, time, vash);
		}
		case 2:
		{

		}
		case 3:
		{

		}
		default:
			cout << "Error 404" << endl;
			break;
		}




	} while (true);




	system("pause");
	return 0;
}