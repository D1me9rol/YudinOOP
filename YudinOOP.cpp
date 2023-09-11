// YudinOOP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Customer.h"
#include "Shop.h"

using namespace std;

void ShowMenu()
{
	cout << "0. Exit\n1. Add Customer\n2. Show customers list\n3. Read from file\n4. Save to file\n5. Clear customers list" << endl;
}

int main()
{
	Shop Tools;
	int Option;
	
	do
	{
		ShowMenu();
		cin >> Option;
		switch (Option)
		{
		case 0:
			cout << "Good bye!" << endl;
			break;
		case 1:
			Tools.AddCustomer();
			
			break;
		case 2:
			Tools.ShowCustomersList();
			
			break;
		case 3:
			Tools.FileRead();
			
			break;
		case 4:
			Tools.FileSave();
			
			break;
		case 5:
			Tools.ClearCustomersList();
			
			break;
		default:
			cout << "Choose the number between 0 and 5" << endl;
			break;
		} 
	} while (Option != 0);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
