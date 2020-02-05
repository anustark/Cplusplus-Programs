//factorial

#include<iostream>
using namespace std;
int main()
{
  int n,f=1;
  cout<<"Enter any number :";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    f=f*i;
  }
  cout<<"\n Factorial : "<<f;
  return 0;
}
