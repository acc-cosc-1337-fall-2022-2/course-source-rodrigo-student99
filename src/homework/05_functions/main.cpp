/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
#include "func.h"
#include <iostream>

using std::cin;
using std::cout;


int main() 
{
	cout<<"\nHello user! Please select an option from menu";
	cout<<"\n1- Get GC Content";
	cout<<"\n2- Get DNA Complement";
	cout<<"\n3- Exit";
	cout<<"\nPlease type in your choice here: ";
	char choice;
	cin >> choice;

	switch(choice)
	{
		{
		case '1':
			string strand;
			double result;
			cout<<"\nType in the strand you want the GC content of here: ";
			cin >> strand;
			result = get_gc_content(strand);
			cout<<"\nThe GC content is "<<result<<"\n";
			break;
		}
		{
		case '2':
			string strand;
			string result;
			cout<<"\nType in the strand you want the complenent of here: ";
			cin >> strand;
			result = get_dna_complement(strand);
			cout<<"\nThe DNA complement is "<<result<<"\n";
			break;
		}
		default:
			cout<<"\nYou have chosen to exit the menu\n";
			break;
	}


	return 0;
}