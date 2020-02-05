//swapping without using a third variable.

#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  cout<<"Enter two variables/numbers : ";
  cin>>n1>>n2;
  n1=n1*n2;
  n2=n1/n2;
  n1=n1/n2;
  cout<<"\nAfter swapping : n1= "<<n1<<" and n2= "<<n2;
  return 0;
}
