#pragma once
#include"Bank.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int runn = 1;
	int cnt = 0;
	vector<Bank> vc1;
	Bank b;
	while (1)
	{
		b.AddNewCustomer(&vc1);
		b.DisplayCustomers(&vc1);
		
			if (cnt == 2)
			{
				b.WriteCustomerNames(&vc1);
				cout << "\nPrinted in file";
				break;
			}
			cnt++;
	}


	return 0;
}