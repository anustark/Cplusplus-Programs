//armstrong number
#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,d=0;
  cout<<"Enter any number : ";
  cin>>n;
  int temp=n;
  while(n)
  {
    d=n%10;
    sum+=(d*d*d);
    n/=10;
  }
  if(temp==sum)
      cout<<"It is armstrong!";
  else
      cout<<"NOPE!";
  return 0;
}
