//string in alphabetical order.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string ch="bdacevbf";
  int l=ch.length();
  char temp;
  int j=0;
  for(int i=0;i<(l-1);i++)
  {
    for(j=i+1;j<l;j++)
    {
      if(ch[i]>ch[j])
      {
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
      }
    }
  }
  cout<<"Answer : "<<ch;
  return 0;
}
