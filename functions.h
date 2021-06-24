#include<iostream>
using namespace std;
#pragma once

int login()
{
	int choice = 0;
	//system("PAUSE");
	system("CLS");	
	cout << "\t\t\tWELCOME TO ELECTION MANAGEMENT SYSTEM!!\n";
	cout << "1-Election Commission Login\n";
	cout << "2-Political Party Login\n";
	cout << "3-Voter Login\n";
	cout << "4-Exit\n";
	cin >> choice;
	return choice;
}
int EClogin()
{
	int choice = 0;
	//system("PAUSE");
	system("CLS");
	cout << "\t\t\tWELCOME!!\n";
	cout << "You have been logged in as an Election commision\n";
	cout << "1-Register a national assemble constituency\n";
	cout << "2-List all constituencies\n";
	cout << "3-Update/Delete Constituencies\n";
	cout << "4-Register Political Party\n";
	cout << "5-Register a candidate\n";
	cout << "6-Register voter\n";
	cout << "7-Show Results\n";
	cout << "8-Go back to main menu\n";
	cin >> choice;
	return choice;
}