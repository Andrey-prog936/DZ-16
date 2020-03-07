#pragma once

#include <iostream>
#include <string>
using namespace std;

void addP(string name, string des, string day, string time, string vash)
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter description: ";
	cin >> des;
	cout << "Enter day: ";
	cin >> day;
	cout << "Enter time: ";
	cin >> time;
	cout << "Enter importance (1-3): ";
	cin >> vash;
}

void Show(string name, string des, string day, string time, string vash)
{

	cout << "Name: " << name << endl;

	cout << "Description: " << des << endl;

	cout << "Day: " << day << endl;

	cout << "Time: " << time << endl;

	cout << "Importance: " << vash << endl;

}