#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Customer
{
private:
	string name;
	int age;

public:
	void SetData(string c_name, int c_age)
	{
		cout << "Enter the name: ";
		getline(cin, c_name);

		cout << "Enter age: ";
		cin >> c_age;

		name = c_name;
		age = c_age;
	}

	void ShowData()
	{
		cout << "Name: " << name << "\tAge: " << age << endl;
	}

	void GetFromFile()
	{
		
	}
};

