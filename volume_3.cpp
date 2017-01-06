#include<iostream>

using namespace std;

int volume(int l,int b,int h)
{

cout<<"the volume of cuboid is"<<l*b*h<<"\n";

}

float volume(float r,float h)
{

cout<<"the volume of cylinder is"<<3.14*r*r*h<<"\n";
}

int volume(int a)
{

cout<<"the volume of cube is"<<a*a*a<<"\n";

}

int main()
{
int a,s,d;
float f,g,h;
cout<<"please enter the length,breadth and height of cuboid \n";

cin>>a>>s>>d;
volume(a,s,d);

cout<<"please enter the radius and height of cylinder \n";
cin>>f>>g;
volume(f,g);

cout<<"please enter the side of cube \n";
cin>>h;
volume(h);
return 0;
}

