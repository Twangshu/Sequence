#ifndef DNA_H_
#define DNA_H_

#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

class Sequence
{
	private:
		string fname;
	public:
		Sequence(string filename);
		int length();
		int numberOf(char base);
		string longestConsecutive();
		string longestRepeated();
		int comlen(char *p,char *q);

};

#endif

