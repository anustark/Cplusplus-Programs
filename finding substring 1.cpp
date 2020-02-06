//finding whether a substring is present in a string or not.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string ar,sub;
  int loc=0;
  cout<<"Enter any string : ";
  getline(cin,ar);
  cout<<"Enter substring to be searched : ";
  getline(cin,sub);
  cout<<"Location : "<<ar.find(sub);
  return 0;
}
