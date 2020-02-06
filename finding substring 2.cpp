//finding substring 2nd.

#include<iostream>
using namespace std;
int main()
{
  string ar,sub;
  int j=0,temp=0;
  cout<<"Enter any string :";
  getline(cin,ar);
  //fflush(stdin);
  cout<<"Enter substring to be searched : ";
  getline(cin,sub);
  for(int i=0;ar[i]!='\0';i++)
  {
    j=0;
    if(ar[i]==sub[j])
    {
      temp=i+1;
      while(ar[i]==sub[j])
      {
        i++;
        j++;
      }
      if(sub[j]=='\0')
      {
        cout<<"Substring present!";
        break;
      }
      else
      {
        i=temp;
        temp=0;
      }
    }
  }
  if(temp==0)
    cout<<"NOPE";
  return 0;
}
