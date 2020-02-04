//printing tables between given range.

#include<iostream>
using namespace std;
int main()
{
  int low=0,high=0,j=0;
  cout<<"Enter low of range : ";
  cin>>low;
  cout<<"Enter high of range : ";
  cin>>high;
  for(int i=low;i<=high;i++)
  {
    for(j=1;j<=10;j++)
      cout<<"\n"<<i<<"x"<<j<<"="<<i*j;
    cout<<"\n-----------------------";
  }
  return 0;
}
