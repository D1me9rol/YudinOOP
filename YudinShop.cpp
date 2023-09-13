#include "YudinShop.h"


using namespace std;

void YudinShop::AddCustomer()
{
	YudinCustomer* Visitor = new YudinCustomer("", 0, 0);
	Visitor->EnterData();
	Visitors.push_back(Visitor);
}

void YudinShop::ShowCustomersList()
{
	cout << "------------------------------" << endl;
	if (Visitors.size() > 0)
	{
		for (const auto& Visitor : Visitors)
		{
			//cout << i+1 << ".";
			Visitor->ShowData();
		}
	}
	cout << "------------------------------" << endl;
}

void YudinShop::FileRead()
{
	//Visitors.clear();
	int CustomersAmount;
	string FileName;
	

	cout << "Введите название файла для чтения: ";
	cin >> FileName;
	ifstream InData;
	InData.open(FileName);

	InData >> CustomersAmount;
	for (int i=0; i < CustomersAmount; i++)
	{
		YudinCustomer* Visitor = new YudinCustomer("", 0, 0);
		Visitor->ReadFile(InData);
		Visitors.push_back(Visitor);
	}

	InData.close();

	cout << "Данные успешно прочитаны!" << endl;
}

void YudinShop::FileSave()
{
	string FileName;

	cout << "Введите название файла для сохранения: ";
	cin >> FileName;
	ofstream OutData;
	OutData.open(FileName);

	OutData << Visitors.size() << endl;
	for (auto Visitor:Visitors)
	{
		Visitor->SaveFile(OutData);
	}

	OutData.close();

	cout << "Файл успешено сохранен!" << endl;
}

//void YudinShop::ClearCustomersList()
//{
//	
//	cout << "Customers list cleared successfully" << endl;
//}


