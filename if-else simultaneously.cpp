//execute both if and else simultaneously.

#include<iostream>
using namespace std;
int main()
{
  if(1)     //works with 0 as well.
  {
    label1: cout<<"Hello! ";
    goto label2;
  }
  else
  {
    goto label1;      //goes to if block if the condition there is false & else was invoked directly.
    label2: cout<<"World";
  }
  return 0;
}
