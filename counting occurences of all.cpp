//counting occurences of all alphabets in a string.

#include<iostream>
using namespace std;
int main()
{
  char ar[100];
  int f[256]={0};
  cout<<"Enter any string:";
  cin.get(ar,100);
  for(int i=0;ar[i]!='\0';i++)
    {
      f[ar[i]]++;
    }
  for(int j=0;j<256;j++)
  {
    if(f[j]!=0)
    {
      cout<<(char)j<<" "<<f[j]<<endl;
    }
  }
  return 0;
}
