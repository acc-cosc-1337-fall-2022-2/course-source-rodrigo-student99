//write include statements
#include "data_types.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;
/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	int num;
	
	cout<<"Please enter an int: ";
	cin >> num;

	int result;
	result = multiply_numbers(num);

	cout<<"The result is "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"The last result is "<<result<<"\n";

	return 0;
}
