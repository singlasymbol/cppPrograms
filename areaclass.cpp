#include<iostream>

using namespace std;

class rectangle
{
float length;
float breadth;

public:
void get_data()
{
cout<<"enter the length and breadth"<<endl;
 cin>>length>>breadth;
 }
 
 void show_data()
 {
 cout<<"length ="<<length<<"\n"<<"breadth="<<breadth<<endl;
 }
 
 float area()
 {
 float a;
 a=length*breadth;
 cout<< a<<endl;;
 }
 };
 
int main()
{
rectangle a;

a.get_data();
a.show_data();
a.area();
}

