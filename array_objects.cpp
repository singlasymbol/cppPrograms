#include<iostream>

using namespace std;

class employee
{
public:
char name[100];
int age;

public:


void get_data()
{

	cout<<"please enter the name and age";
	cin>>name>>age;
}
void show_data()
{
	cout<<"The name and age of the employee is\n";
	cout<<name<<age;
}


};

int main()
{
employee manager[5];
int i,j,k;
for(i=0;i<5;i++)
{
manager[i].get_data();
}
for(i=0;i<5;i++)
{
manager[i].show_data();
}
}

