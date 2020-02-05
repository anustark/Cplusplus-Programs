//swapping using a third variable and without any function.

#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  cout<<"Enter any two numbers : ";
  cin>>n1>>n2;
  int temp=n1;
  n1=n2;
  n2=temp;
  cout<<"After swapping : a = "<<n1<<" and "<<"b = "<<n2;
  return 0;
}
