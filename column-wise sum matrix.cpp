//column wise sum in matrix

#include<iostream>
using namespace std;
int main()
{
  int a[3][3],s=0,i,j;
  cout<<"Enter 3x3 matrix :\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      cin>>a[i][j];
  }
  cout<<"Row wise sum :\n";
  for(i=0;i<3;i++)
  {
    s=0;
    for(j=0;j<3;j++)
    {
      s+=a[j][i];
    }
    cout<<"Sum of column "<<(i+1)<<" is : "<<s<<endl;
  }

  return 0;
}
