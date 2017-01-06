#include<iostream>

using namespace std;

template<class type>

void show(type x)
{
	cout<<"\nx = "<<x<<endl;
}

main()
{
char c='A';
int i=65;

double d=65.24;

show(c);
show(i);
show(d);
}


