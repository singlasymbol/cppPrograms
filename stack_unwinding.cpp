#include<iostream>

using namespace std;

void f1()throw(int)
{

cout<<"\nf1()start\n";
throw 100;
cout<<"\nf1()end\n";
}

void f2()throw(int)
{

cout<<"\nf2()start\n";
f1();
cout<<"\nf2()end\n";
}

void f3()
{

cout<<"\nf3()start\n";
try
{
f2();
}

catch(int i)
{
cout<<"caught exception"<<i<<endl;
}

cout<<"f3()end\n";

}

main()
{
f3();
}


