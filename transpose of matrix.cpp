//matrix transpose.
#include<iostream>
using namespace std;
int main()
{
  int a[2][2],b[2][2],c[2][2];
  int i,j,k;
  cout<<"Enter elements for matrix A : ";
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      cin>>a[i][j];
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      b[j][i]=a[i][j];
    }
  }
  cout<<"Transpose of matrix A :\n";
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      cout<<b[i][j]<<" ";
     cout<<endl;
  }

  return 0;
}
