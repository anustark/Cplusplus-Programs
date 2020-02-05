//implicit and explicit type conversion.
//implicit is the automatic type casting.
//explicit is the user defined type casting.
#include<iostream>
using namespace std;
int main()
{
  int x=10;
  char ch='a';
  double y=11.12;
  cout<<(x+ch)<<endl;    //implicit
  cout<<(int)y;       //explicit
  return 0;
}
