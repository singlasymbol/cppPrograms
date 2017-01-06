#include<iostream>

using namespace std;

class temp
{

float t,c,f;

public:

void cl()
{
	cout<<"choose the input format of temperature\n"<<"1.Celcius\n"<<"2.Fahreniet\n";
	int a;
	cin>>a;

		switch(a)
		{

		case 1: 
		cout<<"enter the temp is celcuis\n";
		cin>>t;
		cout<<"the temp in fahrenhiet will be "<<(9/5*t)+32<<"\n";
		break;
		case 2:
 
		cout<<"enter the temp is fahrenhiet\n";
		cin>>t;
		cout<<"the temp in celciius will be "<<(t-32)*5/9<<"\n";
		
		break;
		}
}
};
int main()
{
temp r;
r.cl();
}

