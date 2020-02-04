//printing any number's table

#include<iostream>
using namespace std;
int main()
{
  int num=0;
  cout<<"Enter any number : ";
  cin>>num;
  for(int i=1;i<=10;i++)
  {
    cout<<num<<"x"<<i<<"="<<num*i<<endl;
  }
  return 0;
}
