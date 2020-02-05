//reversing a character array
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char ar[100];
  cout<<"Enter any array : ";
  cin.get(ar,100);
  //cout<<"\n"<<ar;
  int l=strlen(ar);
  char revstr[100];
  int j=0;
  for(int i=l-1;i>=0;i--)
  {
    revstr[j]=ar[i];
    j++;
  }
  cout<<"Reversed string : "<<revstr;
  return 0;
}
