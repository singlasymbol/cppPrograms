#include<iostream>
#include<math.h>
using namespace std;

class complex
{
public:
	int real;
	int imag;
	
	friend void print(complex r)
	{
	
	cout<<"the result is"<<r.real<<"+ i"<<r.imag<<"\n";
	}
	
		
	friend void sum(complex t1,complex t2)
	{
	complex t3;
		
		t3.real=t2.real+t1.real;
		t3.imag=t2.imag+t1.imag;
		print(t2);	
	}
	
	friend void diff(complex t1,complex t2)
	{
		complex t3;
		
		t3.real=t2.real-t1.real;
		t3.imag=t2.imag-t1.imag;
		
		print(t3);
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
	t3.real=x;
	t3.imag=z;
	print(t3);
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
	
	cout<<"1.for addition \n 2.Difference\n 3.Multiplication  \n4.Divison";

	cin>>r;
	
	switch(r)
	{
	case 1: 
	sum(a,b);
	break;
	
	case 2:
	diff(a,b);
	break;
	
	case 3:
	mul(a,b);
	break;
	
	case 4:
	divi(a,b);
	break;
	}
	}
