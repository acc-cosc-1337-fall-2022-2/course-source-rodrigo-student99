//write include statements
#include "hwexpressions.h"
#include <iostream>
//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout <<"Please type in the meal amount here:";
	cin >> meal_amount;
	tax_amount = get_sales_tax(meal_amount);
	cout<<"\nPlease type in the tip rate as a decimal here:";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tax_amount + tip_amount;
	cout<<"\nReceipt:\n";
	cout<<"Meal Amount:     $"<<meal_amount;
	cout<<"\nSales Tax:       $"<<tax_amount;
	cout<<"\nTip Amount:      $"<<tip_amount;
	cout<<"\nTotal:           $"<<total;
	return 0;
}
