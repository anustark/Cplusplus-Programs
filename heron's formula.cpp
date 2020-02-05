//area of a triangle using heron's formula.

#include<iostream>
#include<math>
using namespace std;
int main()
{
  float s1,s2,s3;
  cout<<"Enter 3 sides of triangle : ";
  cin>>s1>>s2>>s3;
  float s=(s1+s2+s3)/2;
  float ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
  cout<<"\nArea is : "<<ar;
  return 0;
}
