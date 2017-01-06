#include<iostream>

using namespace std;

int time(int a, int b)
{
int s;
s=a*60+b;

cout<<s<<"\n";
}

int main()
{

int a,b;
cout<<"please enter the time"<<endl;

cin>>a>>b;

if(a>24)
{
cout<<"please enter valid time";
}

else if(a>60)
{
cout<<"please enter valid time";
}
else
{
time(a,b);
}
return 0;
}

