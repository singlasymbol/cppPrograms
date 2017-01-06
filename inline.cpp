#include<iostream>

using namespace std;

inline float multi(float a,float b)
{
return (a*b);
}


inline float div(float a,float b)
{
return (a/b);
}

int main()
{

float a=10.234;
float b=4.35;

cout<<multi(a,b)<<"\n";
cout<<div(a,b)<<"\n";
return 0;


}
