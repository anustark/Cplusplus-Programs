//finding second largest element in an array.

#include<iostream>
using namespace std;
int main()
{
  int n=5,j=0,temp=0;
  int a[5]={3,4,57,1,2};
  for(int i=0;i<5;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]>=a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  cout<<"Sorted array : ";
  for(int k=0;k<n;k++)
    cout<<a[k]<<" ";
  return 0;
}
