#include<iostream>

using namespace std;

int main()
{
int i,j,k,a;
int *p,**ptr;
cin>>a;
p=&a;

ptr=&p;
cout<<p<<"\n";
cout<<ptr;
}
