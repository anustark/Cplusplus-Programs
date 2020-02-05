//using setprecision().

#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
  float f = 12.123456;
  cout << "Number was : " << f << endl;
  cout << fixed << setprecision (2) << "Now its : " << f;
  return 0;
}
