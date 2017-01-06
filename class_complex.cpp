#include<iostream>
#include<math.h>
using namespace std;

class complex
{
public:
	int real;
	int imag;
	
	
	friend void sum(complex t1,complex t2)
	{
	complex t3;
		
		t3.real=t2.real+t1.real;
		t3.imag=t2.imag+t1.imag;
		
		cout<<"the sum is "<<t3.real<<"+ i"<<t3.imag<<"\n";
		
	}
	
	friend void diff(complex t1,complex t2)
	{
		complex t3;
		
		t3.real=t2.real-t1.real;
		t3.imag=t2.imag-t1.imag;
		
		cout<<"the diff is "<<t3.real<<"(+) i"<<t3.imag<<"\n";
		
	}
	
	
	friend void mul(complex t1,complex t2)
	{
	complex t3;
	int i,x,y,j,k,l,z;
	i=t1.imag*t2.imag;
	j=t1.real*t2.real;
	k=t1.real*t2.imag;
	l=t1.imag*t2.real;
	z=k+l;
	x=j-i;
	
	cout<<"the product is "<<x<<"(+) i"<<z<<"\n";
	}
	
	
	friend void divi(complex t1,complex t2)
	{
	
	complex t3;
	int i,x,y,j,k,l,z;
	int o,p;
	i=t1.imag*(-t2.imag);
	j=t1.real*t2.real;
	k=t1.real*(-t2.imag);
	l=t1.imag*t2.real;
	z=k+l;
	x=j-i;
	
	int f,g,h;
	f=pow(t2.real,2);
	g=pow(t2.imag,2);
	
	h=f-g;
	
	cout<<"the divison is ("<<x<<"(+) i"<<z<<")/"<<h<<"\n";
	
	}
	}a,b;
		
	int main()
	{
	int p,q,r,t;
	
	cout<<"please enter the first number\n";
	cin>>a.real>>a.imag;
	
	
	cout<<"please enter the second number\n";
	cin>>b.real>>b.imag;
	
	sum(a,b);
	diff(a,b);
	mul(a,b);
	divi(a,b);
	}
