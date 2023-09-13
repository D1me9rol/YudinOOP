#pragma once
#include "YudinCustomer.h"

#include <vector>
class YudinShop
{
private:
	std::vector<YudinCustomer*> Visitors;
public:
	~YudinShop()
	{
		for (YudinCustomer* Visitor : Visitors)
		{
			delete Visitor;
		}
	}

	void AddCustomer();
	void ShowCustomersList();
	void FileRead();
	void FileSave();
	//void ClearCustomersList();

	
};

