#pragma once
#include "Customer.h"

#include <map>
class Shop
{
private:
	std::map<int, Customer> Visitors;
public:

	void AddCustomer();
	void ShowCustomersList();
	void FileRead();
	void FileSave();
	void ClearCustomersList();

	
};

