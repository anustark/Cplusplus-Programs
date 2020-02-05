//swapping using call b reference.

#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
  int c=*a;
  *a=*b;
  *b=c;
}
int main()
{
  int n1,n2;
  cout<<"Enter 2 numbers :";
  cin>>n1>>n2;
  swap(&n1,&n2);
  cout<<"After swapping..";
  cout<<"\n n1 = "<<n1<<" and n2 = "<<n2;
  return 0;
}
