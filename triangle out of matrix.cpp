//matrix lower triangle
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
      if(i>=j)                    //(i<=j) for upper triangle
        cout<<a[i][j]<<" ";
    }
  }
  return 0;
}
