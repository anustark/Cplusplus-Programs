//showing call by value and call by reference.

#include<iostream>
using namespace std;
void demo1(int a,int b)
{
  a+=10;
  b+=10;
  cout<<"this is call by value...\n";
  cout<<"After changing their values : "<<a<<" and "<<b;
}
void demo2(int *x,int *y)
{
  *x+=10;
  *y+=10;
  cout<<"this is call by reference...\n";
  cout<<"after changing their values : "<<*x<<" and  "<<*y;
}
int main()
{
  int n1,n2;
  int choice;
  cout<<"1.call by value.\n";
  cout<<"2.call by reference.\n";
  cout<<"Enter your choice : ";
  cin>>choice;
  switch(choice)
  {
    case 1: cout<<"Enter 2 numbers : ";
            cin>>n1>>n2;
            demo1(n1,n2);
            cout<<"\nthese are values in main()...\n"<<n1<<" and "<<n2;
            break;
    case 2: cout<<"Enter 2 numbers :";
            cin>>n1>>n2;
            demo2(&n1,&n2);
            cout<<"\nthese are values in main()...\n"<<n1<<" and "<<n2;
            break;
    default :
            cout<<"Wrong choice";
            break;
  }
  return 0;
}
