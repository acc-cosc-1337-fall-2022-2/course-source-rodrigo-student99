#include <iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string name = "C++";
    char letter = 'a';
    
    cout<<letter<<'\n';
    cout<<name<<'\n';

    //create strings
    string s0("Initial String");
    cout<<s0<<'\n';
    string s1;
    s1.append("a");
    s1.append("b");
    s1.append("c");

    cout<<s1<<'\n';


    return 0;
}