//simple calculator using switch case.

#include<iostream>
#include<conio.h>      //only for old compilers like turbo c++ etc.
#include<process.h>    //might not be needed in some compilers
using namespace std;
int main()
{
  int choice;
  cout<<"Main Menu : ";
  cout<<"\n1.Addition";
  cout<<"\n2.Subtraction";
  cout<<"\n3.Multiplication";
  cout<<"\n4.Division";
  cout<<"\n5.EXIT";
  cout<<"\n\nEnter your choice (1-5): ";
  cin>>choice;
  switch(choice)
  {
    case 1: clrscr();       //wont work in new compilers especially online ones.
            cout<<"Enter 2 numbers : ";
            cin>>a>>b;
            cout<<"Result : "<<(a+b);
            getch();        //read comment ahead clrscr(); that applies here too.
            break;
    case 2: //write yourself
            break;
    case 3: //write yourself
            break;
    case 4: //write yourself
            break;
    case 5: exit(0);

    default: cout<<"Wrong input!";
            break;

  }
  return 0;
}
