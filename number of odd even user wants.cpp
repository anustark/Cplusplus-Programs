//checking for odd and even in a range.

#include<iostream>
using namespace std;
int main()
{
  int num=0,count=0;
  cout<<"Enter number of even number required : ";
  cin>>num;
  for(int i=1;i<=100;i++)
  {
    if(i%2==0)
      {
        count++;
        if(count<=num)
          cout<<i<<endl;
      }
  }
  return 0;
}
