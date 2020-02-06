//sum of elements of an array.
#include<iostream>
using namespace std;
int main()
{
  int ar[100],n=0;
  cout<<"Enter number of elements : ";
  cin>>n;
  cout<<"Enter elements : ";
  for(int i=0;i<n;i++)
    cin>>ar[i];
  int sum=0;
  for(int i=0;i<n;i++)
    {
      sum+=ar[i];
    }
  cout<<"sum : "<<sum;
  return 0;
}
