#include<iostream>
using namespace std;
int main()
{
    char ar[100];
    cout<<"Enter string : ";
    cin.get(ar,100);
    cout<<"Output : ";
    for(int i=0;ar[i]!='\0';i++)
    {
        if(ar[i]=='0'||ar[i]=='1'||ar[i]=='2'||ar[i]=='3'||ar[i]=='4'||ar[i]=='5'||ar[i]=='6'||ar[i]=='7'||ar[i]=='9')
            cout<<ar[i];
        else if(ar[i]=='.')
            cout<<"[.]";
    }
    return 0;
}
