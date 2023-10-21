#pragma once
#include "YudinCustomer.h"

#include <vector>
class YudinShop
{
private:
	std::vector<YudinCustomer*> Visitors;
public:
	/*~YudinShop()
	{
		
	}*/

	void AddCustomer();
	void ShowCustomersList();
	void FileRead();
	void FileSave();
	void ClearCustomersList();

	
};

