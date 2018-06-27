#include<iostream>
#include "Sequence.h"

int main()
{

    Sequence dna("/data/dna.txt");
    dna.length();
    dna.numberOf('A');
    dna.numberOf('T');
    dna.numberOf('C');
    dna.numberOf('G');
    dna.longestConsecutive();
    dna.longestRepeated();
    return 0;
}

