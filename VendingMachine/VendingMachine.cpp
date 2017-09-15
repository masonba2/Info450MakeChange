// VendingMachine.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const double dollar = 1.00;
	const double quarter = .25;
	const double dime = .10;
	const double nickel = .05;
	double cost;
	double amountpaid;
	double remainingbalance;
	double additionalmoney;
	double addtlbalanceneeded;
	double change;
	double additionalpaid;
	double additionalpaid2;
	double remainingbalance2;

	do {
		cout << "Please enter the cost of the item (Enter 0 to Cancel): ";
		cin >> cost;
		cout << "Please enter your money: ";
		cin >> amountpaid;

		while (amountpaid == cost)
		{
			cout << "Item Price: " << cost << ". Amount Paid: " << amountpaid << ". Change due: 0"  << endl;
			cout << "Have a Nice Day!" << endl;
			break;
		}

		while (amountpaid < cost)
		{
			remainingbalance = (cost - amountpaid);
			cout << "That is not enough! You need " << remainingbalance << " more. " << endl;
			cout << "Please enter remaining cost: ";
			cin >> additionalmoney;
			
			addtlbalanceneeded = (remainingbalance - additionalmoney);
			
			if (additionalmoney < remainingbalance);
			{
				cout << "That is not enough! You need " << addtlbalanceneeded << " more." << endl;
				cout << "Please enter additional amount: ";
				cin >> additionalpaid;
			}

			if (additionalpaid == addtlbalanceneeded);
			{
				cout << "Thanks for your purchase!" << endl;
				break;
			}

			remainingbalance2 = (addtlbalanceneeded - additionalpaid);

			if (additionalpaid < addtlbalanceneeded);
			{
				cout << "That is still not enough. You need " << remainingbalance2 << " more" << endl;
				cout << "Please enter additional amount: ";
				cin >> additionalpaid2;
			}

			if (additionalpaid2 == remainingbalance2)
			{
				cout << "Thanks for your purchase!" << endl;
				break;
			}

		}

		while (amountpaid > cost)
		{
			change = (amountpaid - cost);
			if (change == dollar)
			{
				cout << "Item Price: " << cost << ". Amount Paid: " << amountpaid << ". Change due: " << change << endl;
				cout << "Your change: 1 Dollar" << endl;
				break;
			}

			if (change == quarter)
			{
				cout << "Item Price: " << cost << ". Amount Paid: " << amountpaid << ". Change due: " << change << endl;
				cout << "Your change: 1 Quarter" << endl;
				break;
			}

			if (change == dime)
			{
				cout << "Item Price: " << cost << ". Amount Paid: " << amountpaid << ". Change due: " << change << endl;
				cout << "Your Change: 1 Dime" << endl;
				break;
			}

			if (change == nickel);
			{
				cout << "Item Price: " << cost << ". Amount Paid: " << amountpaid << ". Change due: " << change << endl;
				cout << "Your Change: 1 Nickel" << endl;
				break;
			}

			if (change != dollar || quarter || dime || nickel);
			{
			    cout << "Item Price: " << cost << ". Amount Paid: " << amountpaid << ". Change due: " << change << endl;
				break;
			}
		}

	} while (cost != 0);
		return 0;
	
}