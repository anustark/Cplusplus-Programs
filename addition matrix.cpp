//matrix addition
#include<iostream>
using namespace std;
int main()
{
  int a[2][2],b[2][2],c[2][2];
  int i,j;
  cout<<"Enter elements for matrix A : ";
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      cin>>a[i][j];
  }
  cout<<"Enter elements for matrix B : ";
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      cin>>b[i][j];
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      c[i][j]=a[i][j]+b[i][j];
  }
  cout<<"Answer : \n";
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      cout<<c[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}
