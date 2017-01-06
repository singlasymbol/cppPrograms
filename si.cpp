#include<iostream>

using namespace std;

int interest(int p,int r,int t)
{
	int s;
	
	s=(p*r*t)/100;
	
	cout<<"si is"<<s<<"\n";
}

int main()
{
	int p,r,t,age;
	
	cout<<"please enter the age"<<"\n";
	
	cin>>age;
	cout<<"please enter the principle amount and time";
	cin>>p>>t;
	if(age>60)
	{
	interest(p,12,t);
	}
	
	
	else{
	interest(p,10,t);
	}	
+}
