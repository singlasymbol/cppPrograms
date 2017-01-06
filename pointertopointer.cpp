#include<iostream>

using namespace std;

int main()
{
int x,*ptr,**ptr1;
cout<<"enter the value of x\n";
cin>>x;

ptr=&x;

cout<<"the address of x is"<<ptr<<"\n";

ptr1=&ptr;

cout<<"the address of second address is"<<ptr1<<"\n";
}
