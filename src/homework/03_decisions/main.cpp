//write include statements
#include "decisions.h"
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;


int main() 
{
	cout<<"   Main Menu"<<"\n";
	cout<<"1-Letter Grade using If\n";
	cout<<"2-Letter Grade using Switch\n";
	cout<<"3-Exit\n";
	cout<<"Please type in your choice here: ";
	int input;
	cin >> input;
	
	string letter_grade;
	int grade;

	switch(input){
		case 1:
			cout<<"Please type in the grade here:";
			cin >> grade;
			if ((grade >= 0) && (grade <= 100) ){
			letter_grade = get_letter_grade_using_if(grade);
			cout<<"The final letter grade was a "<<letter_grade<<"\n";
			break;	
			} else {
				cout<<"Looks like that number is out of range"<<"\n";
				break;
			}
		case 2:
			cout<<"Please type in the grade here:";
			cin >> grade;
			if ((grade >= 0) && (grade <= 100) ){
			letter_grade = get_letter_grade_using_switch(grade);
			cout<<"The final letter grade was a "<<letter_grade<<"\n";
			break;	
			} else {
				cout<<"Looks like that number is out of range"<<"\n";
				break;
			}
		default: 
			cout<<"You have chosen to exit the program\n";
			break;
	}
	return 0;
}