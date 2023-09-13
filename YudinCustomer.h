#pragma once
#include <iostream>
#include <fstream>
#include <string>



class YudinCustomer
{
private:
	std::string name;
	int age;
	double avg_check;

public:

	YudinCustomer(const std::string& name, int age, double avg_check):name(name), age(age), avg_check(avg_check) {}

	void SetData(std::string c_name, int c_age, double c_avg_check);
	
	std::string GetName();
	int GetAge();
	double GetAvg_Check();


	void EnterData();
	void ShowData();
	void ReadFile(std::ifstream& fin);
	void SaveFile(std::ofstream& fout);




};

