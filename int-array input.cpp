//Taking an array as input.

#include<iostream>
using namespace std;
int main()
{
  int n,ar[100];
  cout<<"Enter the size of array : ";
  cin>>n;
  cout<<"\nEnter "<<n<<" elements for array : ";
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
  }
  cout<<"Thank you for entering elements!";
  int j=0;
  while(j<n)
  {
    cout<<ar[j]<<" ";
    j++;
  }
  return 0;
}
