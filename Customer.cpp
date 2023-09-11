#include "Customer.h"

using namespace std;

void Customer::SetData(string c_name, int c_age, double c_avg_check)
{
	name = c_name;
	age = c_age;
	avg_check = c_avg_check;
}

std::string Customer::GetName()
{
	return name;
}

int Customer::GetAge()
{
	return age;
}

double Customer::GetAvg_Check()
{
	return avg_check;
}



void Customer::EnterData()
{
	string c_name;
	int c_age;
	double c_avg_check;
	
	cout << "Enter the name: ";
	cin.ignore();
	getline(cin, c_name);
	
	cout << "Enter age: ";
	cin >> c_age;
	
	cout << "Enter average check: ";
	cin >> c_avg_check;
	
	SetData(c_name, c_age, c_avg_check);
}

void Customer::ShowData()
{
	cout << "\tName: " << GetName() << "\tAge: " << GetAge() << "\tAverage Check: " << GetAvg_Check() << endl;
}

void Customer::ReadFile(ifstream& fin)
{
	fin.ignore();
	getline(fin, name);
	fin >> age >> avg_check;
}

void Customer::SaveFile(ofstream& fout)
{
	fout << name << "\n" << age << "\n" << avg_check << endl;
}



//std::ifstream& operator>>(std::ifstream& fin, Customer& Visitor)
//{
//	string c_name;
//	int c_age;
//	double c_avg_check;
//
//	fin.ignore();
//	getline(fin, c_name);
//	fin >> c_age >> c_avg_check;
//
//	Visitor.SetData(c_name, c_age, c_avg_check);
//	return fin;
//}

//std::ofstream& operator <<(std::ofstream& fout, Customer Visitor)
//{
//	fout << Visitor.GetName() << "\n" << Visitor.GetAge() << "\n" << Visitor.GetAvg_Check() << endl;
//	return fout;
//}

//std::ostream& operator<<(std::ostream& out, Customer& Visitor)
//{
//	cout << "Name: " << Visitor.GetName() << "\tAge: " << Visitor.GetAge() << "\tAverage Check: " << Visitor.GetAvg_Check() << endl;
//	return out;
//}



//std::istream& operator >> (std::istream& in, Customer& Visitor)
//{
//	string c_name;
//	int c_age;
//	double c_avg_check;
//
//	cout << "Enter the name: ";
//	cin.ignore();
//	getline(cin, c_name);
//
//	cout << "Enter age: ";
//	cin >> c_age;
//
//	cout << "Enter average check: ";
//	cin >> c_avg_check;
//
//	Visitor.SetData(c_name, c_age, c_avg_check);
//
//	return in;
//}
