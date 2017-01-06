#include<iostream>
using namespace std;
int volume(int l,int b=4, int h=4);
int main()
{
int l,b,h;
cout<<"enter all values\n";
cin>>l>>b>>h;
volume(l);

volume(l,b);

volume(l,b,h);
return 0;
}
int volume(int l,int b, int h)
{
int c;
cout<<"length is" <<l<<"\n";
cout<<"breadth is"<<b<<"\n";
cout<<"heigth is "<<h<<"\n";
c=l*b*h;
cout<<c;
return 0;
}

