#include<iostream>

using std::cout;

int main()
{
   int num = 10;
   int& num_ref = num;//this means get memory address where num is stored
   cout<<"Display the value stored in num: "<<num_ref<<"\n";
   cout<<"change num value via num_ref: \n";

   num_ref = 20;
   cout<<"Display the value stored in num: "<<num_ref<<"\n";
   return 0;
}