/*
  ar  = 1 2 3 4 5
  arn = 2 1 3 5 4
        0 1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5,temp=0;
    int ar[]={1,2,3,4,5};
    for(int i=0;i<n;i+=2)
    {
      if(i<(n/2))
      {
        temp=ar[i];
        ar[i]=ar[i+1];
        ar[i+1]=temp;
      }
      else if(i==(n/2))
      {
        ar[i]=ar[i]+0;
      }
      else if(i>(n/2))
      {
        temp=ar[i];
        ar[i]=ar[i-1];
        ar[i-1]=temp;
      }
    }
    cout<<"Answer : ";
    for(int j=0;j<n;j++)
      cout<<ar[j]<<" ";
  return 0;
}
