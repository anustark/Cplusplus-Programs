//checking odd or even in a given range.

#include<iostream>
using namespace std;
int main()
{
  int low=0,high=0;
  cout<<"Enter low of range : ";
  cin>>low;
  cout<<"Enter high of range : ";
  cin>>high;
  for(int i=low;i<=high;i++)
  {
    if(i%2==0)
      cout<<i<<endl;
  }
  return 0;
}
