//prime numbers

#include<iostream>
using namespace std;
int main()
{
  int n=0,f=0;
  cout<<"Enter any number : ";
  cin>>n;
  for(int i=2;i<=n-1;i++)
  {
    if(n%i==0)
    {
      f=1;
      break;
    }
  }
  if(f==1)
    cout<<"NOPE!";
  else
    cout<<"We good!";
  return 0;
}
