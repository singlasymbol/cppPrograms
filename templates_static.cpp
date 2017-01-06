#include<iostream>

using namespace std;

template<class t>


void fun(const t&x)
{
cout<<x<<endl;
static int i=10;
i++;
cout<<i<<endl;
}

main()
{

fun <int> (1);
fun <int> (2);
fun <int> (1.5);
}

