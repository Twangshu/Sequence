#include <iostream>
#include "Sequence.h"

int main()
{

    Sequence dna("dna.txt");
    cout<<dna.length()<<endl;
    cout<<dna.numberOf('A')<<endl;
    cout<<dna.longestConsecutive()<<endl;
    cout<<dna.longestRepeated()<<endl;
    return 0;
}
