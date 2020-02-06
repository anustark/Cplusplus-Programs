//calculate power of any number to n.
#include<iostream>
using namespace std;
int main()
{
    int num=0,p=0,ans=1;
  cout<<"Enter any number : ";
  cin>>num;
  cout<<"Enter power to raise : ";
  cin>>p;
  for(int i=1;i<=p;i++)
    ans=ans*num;
  cout<<"answer : "<<ans;
  return 0;
}
