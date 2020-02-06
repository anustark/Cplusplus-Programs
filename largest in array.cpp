//finding largest element in an array.
#include<iostream>
using namespace std;
int main()
{
  int a[5]={1,2,3,4,5};
  int la=a[0];
  for(int i=1;i<5;i++)
  {
    if(a[i]>=la)
      la=a[i];
  }
  cout<<"Largest : "<<la;
  return 0;
}
