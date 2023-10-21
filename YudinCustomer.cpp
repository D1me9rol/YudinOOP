#include "YudinCustomer.h"

using namespace std;

void YudinCustomer::SetData(string c_name, int c_age, double c_avg_check)
{
	name = c_name;
	age = c_age;
	avg_check = c_avg_check;
}

std::string YudinCustomer::GetName()
{
	return name;
}

int YudinCustomer::GetAge()
{
	return age;
}

double YudinCustomer::GetAvg_Check()
{
	return avg_check;
}



void YudinCustomer::EnterData()
{
	
	cout << "Введите имя: ";
	cin.ignore();
	getline(cin, name);
	
	cout << "Введите возраст: ";
	cin >> age;
	
	cin.ignore();
	cout << "Введите среднее значение чека: ";
	cin >> avg_check;
	
	//SetData(c_name, c_age, c_avg_check);
}

void YudinCustomer::ShowData()
{
	cout << "\tИмя: " << name << "\tВозраст: " << age << "\tСредний чек: " << avg_check << endl;
}

void YudinCustomer::ReadFile(ifstream& fin)
{
	fin.ignore();
	getline(fin, name);
	fin >> age >> avg_check;
}

void YudinCustomer::SaveFile(ofstream& fout)
{
	fout << name << "\n" << age << "\n" << avg_check << endl;
}

std::ifstream& operator>>(std::ifstream& fin, YudinCustomer& Visitor)
{
	fin.ignore();
	getline(fin, Visitor.name);
	fin >> Visitor.age >> Visitor.avg_check;
	return fin;
}

std::ostream& operator<<(std::ostream& fout, const YudinCustomer& Visitor)
{
	fout << Visitor.name << "\n" << Visitor.age << "\n" << Visitor.avg_check << endl;
	return fout;
}
