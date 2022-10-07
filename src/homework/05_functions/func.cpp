//add include statements
#include "func.h"
#include <vector>

using std::vector;


//add function code here
double get_gc_content(const string& dna)
{
    double total = dna.length();
    double acc = 0;
    for(auto ch: dna)
    {
        if (ch == 'C' || ch == 'G')
        {
            acc += 1;
        }
    }
    auto final_val = acc / total;
    return final_val;
}

string reverse_string(string dna)
{
    string reverse;
    for (int i = dna.size() - 1; i >= 0; i--)
    {
        reverse.push_back(dna[i]);
    }

    return reverse;
}

string get_dna_complement(string dna)
{
    string reverse_complement;
    for (int i = dna.size() - 1; i >= 0; i--)
    {
        switch(dna[i])
        {
            case 'A' :
                reverse_complement.push_back('T');
                break;
            case 'T' :
                reverse_complement.push_back('A');
                break;
            case 'C' :
                reverse_complement.push_back('G');
                break;
            case 'G' :
                reverse_complement.push_back('C');
                break;
        }
    }
    return reverse_complement;
}