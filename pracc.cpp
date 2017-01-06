#include<iostream>

using namespace std;
int sum(int,int);
float sum(float,float);
int main()
{
int s;
float a;
s=sum(4,5.1);
a=sum(4.5f,5.5f);
cout<<s<<"\t"<<a;
}

int sum(int a,int b)
{
return (a+b);
}

float sum(float a,float b)
{
return(a+b);
}

