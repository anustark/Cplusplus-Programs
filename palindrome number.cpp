#include <iostream>
using namespace std;
int main()
{
    int num=0,n=0,pal=0,d=0;
    cout<<"Enter any number : ";
    cin>>num;
    n=num;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        pal=(pal*10)+d;
    }
    if(num==pal)
        cout<<"YES! "<<pal;
    else
        cout<<"NOPE!";
    return 0;
}
