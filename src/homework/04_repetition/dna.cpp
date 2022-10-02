//add include statements
#include "dna.h"
#include <algorithm> 
//add function(s) code here

int factorial(int num)
{
    int total = 1;
    while (num > 0)
    {
        total = total * num;
        num -= 1;
    }
    return total;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 < num2)
        {
            std::swap(num1,num2);
        }else {
        num1 -= num2;
    }
    }   
    return num1;
}
