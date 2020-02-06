//fibonacci series

#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,c=0,n=0;
  cout<<"How many terms? : ";
  cin>>n;
  cout<<a<<" "<<b<<" ";
  for(int i=0;i<n-2;i++)
  {
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
  }
  return 0;
}
