#pragma once
#include <iostream>
#include <string>
#include "coloring.h"
using namespace std;

struct podia
{
	string name;
	string des;
	string day;
	string time;
	string vash;
};
int i = 0;
int te = 0;
podia zap;
int t = 200;
string* SA = new string[t];
void rek(string k, podia zap)
{
	cin >> zap.vash;
	if (zap.vash == "1" || zap.vash == "2" || zap.vash == "3")
	{
		SA[i] = zap.vash;
		i++;
	}
	else
	{
		cout << "Incorrect number,";
		blue
			cout << " please enter again: ";
		def
			rek(k, zap);
	}
}
///////////////////////////////////////////////////////////////////////////////
void addP(podia)
{
	cout << "Enter name: ";
	cin >> zap.name;
	SA[i] = zap.name;
	i++;
	cout << "Enter description: ";
	cin >> zap.des;
	SA[i] = zap.des;
	i++;
	cout << "Enter day: ";
	cin >> zap.day;
	SA[i] = zap.day;
	i++;
	cout << "Enter time: ";
	cin >> zap.time;
	SA[i] = zap.time;
	i++;
	cout << "Enter importance (1-3): ";
	string k = zap.vash;
	rek(k, zap);
	////////////////////////////////////
	te = te + 5;////////////////////////////////////
}
int coun = 0;
////////////////////////////////////////////////////////////////////////////////////////
void Show(podia)
{
	for (int g = 0; g < te; )
	{
		if (SA[g] == "")
		{
			break;
		}
		else
		{
			cout << "Name: " << SA[g] << endl;
			g++;
			cout << "Description: " << SA[g] << endl;
			g++;
			cout << "Day: " << SA[g] << endl;
			g++;
			cout << "Time: " << SA[g] << endl;
			g++;
			if (SA[g] == "1")
			{
				green
					cout << "Importance: " << SA[g] << endl;
				def
					g++;
			}
			else if (SA[g] == "2")
			{
				orange
					cout << "Importance: " << SA[g] << endl;
				def
					g++;
			}
			else if (SA[g] == "3")
			{
				red
					cout << "Importance: " << SA[g] << endl;
				def
					g++;
			}
			cout << endl;
		}
	}
}