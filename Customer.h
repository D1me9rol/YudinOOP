#pragma once
#include <iostream>
#include <fstream>
#include <string>



class Customer
{
private:
	std::string name;
	int age;
	double avg_check;

public:
	void SetData(std::string c_name, int c_age, double c_avg_check);
	
	std::string GetName();
	int GetAge();
	double GetAvg_Check();


	void EnterData();
	void ShowData();
	void ReadFile(std::ifstream& fin);
	void SaveFile(std::ofstream& fout);


	//friend std::ifstream& operator >> (std::ifstream& fin, Customer& Visitor);
	//friend std::ofstream& operator << (std::ofstream& fout, Customer Visitor);
	//friend std::ostream& operator << (std::ostream& out, Customer& Visitor);
	//friend std::istream& operator >> (std::istream& in, Customer& Visitor);

};

