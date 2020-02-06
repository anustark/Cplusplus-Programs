//using arrays in c++.

#include<iostream>
using namespace std;
int main()
{
  int ar[100],n=0;
  cout<<"Enter size of array : ";
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>ar[i];
  for(int i=0;i<n;i++)
    ar[i]=ar[i]+10;
  for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";
  return 0;
}
