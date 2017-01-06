#include<iostream>

using namespace std;

class A
{
	int a;
	
	public:
	
	void geta(int);
	int geta();
	
};

	class B:public A
	{
		int b,c;
		
		public:
		
		void getb(int );
		void add();
		void display();
	};
	
	void A::geta(int x)
	{
		//int a;
		a=x;
	//cout<<"x is"<<x<<endl;
	//cout <<"a is "<<a<<endl;
	}

	int A::geta()
	{	
	//cout<<"a secd is"<<a<<endl;
		return a;
		}
			
	void B::getb(int x)
	{
		//int b;
		b=x;
	}
	
	void B::add()
	{
		//cout<<"geta is "<< geta()<<endl;		
		c=geta();
		//cout<<"c is "<<c<<endl;
		c=c+b;
	}
		
	void B::display()
	{	
		cout<<"geta is";
		cout<<geta()<<endl;
		cout<<"b is "<<b<<endl;
		cout<<"c is "<<c<<endl;
	}

	int main()
	{
		int a,b;
		
		B obj;
		
		cin>>a;
		cin>>b;
		
		obj.geta(a);
		obj.getb(b);
		
		obj.add();
		obj.display();
		return 0;
	}
