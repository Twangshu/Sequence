#include "Sequence.h"
#include<fstream>
#include <stdio.h>
#define MAX 1500000
char *a[MAX];
    int compare(const void *p1, const void *p2 )
{
    return strcmp( *(char* const*)p1, *(char* const*)p2);
}
Sequence::Sequence(string filename)
{
    fname = filename;
}
int Sequence::length()
{
fstream outfile(fname.c_str(),ios::in);
    char str[256];
    int sum=0;
  while(outfile.getline(str,256))
     for(int i = 0; i < strlen(str); i++)
        sum++;
  cout<<"sum: "<<sum<<endl;
}

int Sequence::numberOf(char base)
{
	fstream outfile(fname.c_str(),ios::in);
    char str[256];
    int sum=0;
  while(outfile.getline(str,256))
     for(int i = 0; i < strlen(str); i++)
        {

            if(str[i] == base)
                sum++;
    };
 cout<<base<<":"<<sum<<endl;

}
string Sequence::longestConsecutive()
{
	char s[1500000];
	int *j = new int[1500000];
	int max = 0;
	int tem;
	j[0]=1;
	int t=0;
	char str[256];
	fstream outfile(fname.c_str(),ios::in);
	while(outfile.getline(str,256))
        for(int i = 0; i < strlen(str); i++)
    {
        s[t]=str[i];
        t++;

    }
    for(int f=1;f<=t;f++)
{
        if(s[f]==s[f-1])
	 j[f] = j[f-1]+1;
	    else
	 j[f] =1;
  if(j[f]>max)
   {
    max=j[f];
    tem =f;
   }

}
cout<<"the longest part is :";
for( int k=tem - max+1;k<=tem;k++)
     cout<<s[k];
     cout<<endl;
     delete[]j;

}
int Sequence::comlen(char *p,char *q)
{
    int i=0;
    while(*p&&(*p++==*q++))
        ++i;
    return i;
}

string Sequence::longestRepeated()
{
int n=0,t=0,i,k,x,length=0,maxi=0;
    char s[1500000];
	char str[256];
	fstream outfile("D:\\dna.txt",ios::in);
	while(outfile.getline(str,256))
        for(i = 0; i < strlen(str); i++)
    {
        s[t]=str[i];
        t++;
    }
    for(int q=0;q<t;q++)
    {
    a[n]=&s[q];
        n++;
    }
    qsort(a,n,sizeof(char*),compare);
    for(i=0;i<n-1;++i)
    {
        k=comlen(a[i],a[i+1]);
        if(k>length )
        {
            length=k;
            maxi=i;
        }
    }
    cout<<"The longest repeat part is :";
    for(int p=0;p<length;p++)
       cout<<a[maxi][p];
       cout<<endl;
}

