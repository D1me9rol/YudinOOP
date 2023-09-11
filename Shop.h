#pragma once
#include "Customer.h"

#include <vector>
class Shop
{
private:
	std::vector<Customer> Visitors;
public:

	void AddCustomer();
	void ShowCustomersList();
	void FileRead();
	void FileSave();
	void ClearCustomersList();

	
};

