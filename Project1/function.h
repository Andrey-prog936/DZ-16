#pragma once

#include <iostream>
#include <string>
using namespace std;

struct podia
{
	string name;
	string des;
	string day;
	string time;
	string vash;
};
podia zap;
void addP(podia)
{
	cout << "Enter name: ";
	cin >> zap.name;
	cout << "Enter description: ";
	cin >> zap.des;
	cout << "Enter day: ";
	cin >> zap.day;
	cout << "Enter time: ";
	cin >> zap.time;
	cout << "Enter importance (1-3): ";
	cin >> zap.vash;
	
}

void Show(podia)
{

	cout << "Name: " << zap.name<<endl;

	cout << "Description: " << zap.des << endl;

	cout << "Day: " << zap.day << endl;

	cout << "Time: " << zap.time << endl;

	cout << "Importance: " << zap.vash << endl;
	


}