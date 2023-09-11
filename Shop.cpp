#include "Shop.h"


using namespace std;

void Shop::AddCustomer()
{
	Customer Visitor;
	Visitor.EnterData();

	Visitors.emplace(Visitors.size()+1, Visitor);
	cout << "------------------------------" << endl;
	cout << "Added customer ";
	Visitor.ShowData();
	cout << "------------------------------" << endl;
}

void Shop::ShowCustomersList()
{
	cout << "------------------------------" << endl;
	for (int i=0; i < Visitors.size(); i++)
	{
		cout << i+1 << ".";
		Visitors[i+1].ShowData();
	}
	cout << "------------------------------" << endl;
}

void Shop::FileRead()
{
	Visitors.clear();
	int CustomersAmount;
	string FileName;
	Customer Visitor;

	cout << "Enter the name of file to read: ";
	cin >> FileName;
	ifstream InData;
	InData.open(FileName);

	InData >> CustomersAmount;
	for (int i=0; i < CustomersAmount; i++)
	{
		InData >> Visitors[i+1];
	}

	cout << "File readed successfully!" << endl;
}

void Shop::FileSave()
{
	string FileName;
	Customer Visitor;

	cout << "Enter the name of file to save: ";
	cin >> FileName;
	ofstream OutData;
	OutData.open(FileName);

	OutData << Visitors.size() << endl;
	for (int i = 0; i < Visitors.size(); i++)
	{
		OutData << Visitors[i + 1];
	}

	cout << "File saved successfully" << endl;
}

void Shop::ClearCustomersList()
{
	Visitors.clear();
	cout << "Customers list cleared successfully" << endl;
}


