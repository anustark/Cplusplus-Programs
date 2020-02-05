//sum of digits.

#include<iostream>
using namespace std;
int main()
{
  int num=0,d=0,sum=0;
  cout<<"Enter any number : ";
  cin>>num;
  int n=num;
  while(num)
  {
    d=num%10;
    num/=10;
    sum+=d;
  }
  cout<<"\n\n Sum of digits of number "<<n<<" is "<<sum;
  return 0;
}
