//write include statements
#include "dna.h"
#include <iostream>
#include <string>
//write using statements
using std::cin;
using std::cout;
using std::string;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	bool is_over = false;
	do
	{
		int option;
		cout<<"\n\n1-Factorial"<<"\n";
		cout<<"2-Greatest Common Divisor"<<"\n";
		cout<<"3-Exit"<<"\n";
		cout<<"Please type in your choice here:";
		cin >> option;

		if (option == 1)
		{
			int para;
			int result;
			cout<<"\nWhat number would you like to find factorial of? Type here:";
			cin>>para;
			result = factorial(para);
			cout<<"\nThe factorial result of number you typed was "<<result;

		} else if (option == 2){
			int para1;
			int para2;
			int result;
			cout<<"\nWhat is the first number to find gcd of? Type here:";
			cin>>para1;
			cout<<"\nWhat is the second number to find gcd of? Type here:";
			cin>>para2;
			result = gcd(para1,para2);
			cout<<"\nThe result for gcd was "<<result;
		} else{
			string letter;
			cout<<"Are you sure you want to quit? y/n?";
			cin>>letter;

			if (letter == "y"){
				is_over = true;
			}
		}
		
		
	}while (is_over == false);
	
	
	
	
	return 0;
}