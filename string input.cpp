//Taking a Character array as input.

#include<iostream.h>
#include<string.h>
using namespace std;
void func(string chr)
{
  int l=0;
  l=chr.size();                                         //OR use chr.length()
  cout<<"\nLength of string entered is :"<<l;
}
int main()
{
  string ch;
  cout<<"Enter any String :";
  getline(cin,ch);
  cout<<"You entered : "<<ch;
  func(ch);
  return 0;
}


input/output -

Enter any String :noob here
You entered :noob here
Length of string entered is :9
