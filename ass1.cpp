#include<iostream>
using namespace std;


class complex
{
	int real;
	int imag;
	
	public:
	int a,b;
	void get_data()
	{
		cout<<"please enter the real and imaginary parts of the numbber\n";
		cin>>real>>imag;
	}
	
	friend void sum(complex s1,complex s2)
	{
		complex s3;
		s3.real=s2.real+s1.real;
		
		s3.imag=s1.imag+s2.imag;
	
		cout<<"the new number is "<<s3.real<<"(+)"<<s3.imag<<"\n";
		
		
	}
	
}t1,t2;

int main()
{
	t1.get_data();
	t2.get_data();
	
	sum(t1,t2);
}
