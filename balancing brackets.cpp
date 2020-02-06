//balancing parenthesis.

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int a=0,b=0,c=0;
  char str[100];
  cout<<"Enter any string conatining only brackets : ";
  cin.get(str,100);
  int l=strlen(str);
  for(int i=0;i<l;i++)
  {
    if(str[i]=='{')
      a++;
    else if(str[i]=='}')
      a--;
    else if(str[i]=='(')
      b++;
    else if(str[i]==')')
      b--;
    else if(str[i]=='[')
      c++;
    else if(str[i]==']')
      c--;
  }
  if(a==0 && b==0 && c==0)
    cout<<"Perfect!";
  else
    cout<<"NOPE";
  return 0;
}
