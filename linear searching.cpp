//linear search

#include<iostream>
using namespace std;
int main()
{
  int n=5,f=0,loc=0;
  int ar[n]={1,2,3,4,5};
  int ele;
  cout<<"Enter element to search in array : ";
  cin>>ele;
  for(int i=0;i<n;i++)
  {
    if(ar[i]==ele)
      {
        f=1;
        loc=i+1;
        break;
      }
  }
  if(f==1)
    cout<<"Found at "<<loc;
  else
    cout<<"NOPE!";
  return 0;
}
