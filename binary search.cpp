//binary search
#include<iostream>
using namespace std;
int main()
{
  int n=5;
  int a[n]={1,2,3,4,5};     //need to be in sorted way first!
  int first=0;
  int last=n-1;
  int ele,mid;
  mid=(first+last)/2;
  cout<<"Enter element to search : ";
  cin>>ele;
  while(first<=last)
  {
      if(a[mid]>ele)
        last=mid-1;
      else if(a[mid]==ele)
        {
          cout<<"Found at "<<(mid+1);
          break;
        }
      else
        first=mid+1;
      mid=(first+last)/2;
  }
  if(first>last)
    cout<<"NOPE";
  return 0;
}
