#include<iostream>

using namespace std;

class student

{
	protected:
	int roll_number;
	
	public:
	
	void get_number(int);
	void put_number();
};

void student::get_number(int a)
{
	roll_number=a;
}

void student::put_number()
{
	cout<<"Roll number :"<<roll_number<<endl;
}


class test: public student
{
	protected:
	
	float sub1,sub2;
	
	public:
	
	void get_marks(float x,float y)
	{
		sub1=x;
		sub2=y;
	}
	
	void put_marks()
	{
		cout<<"Marks in sub1:"<<sub1<<"\n";
		cout<<"Marks in sub2:"<<sub2<<"\n";
	}
};

class result:public test
{
	float total;
	public:
	
	void display()
	{
		total=sub1+sub2;
		put_number();
		put_marks();
		
		cout<<"Total="<<total;
	}
};

int main()
{
	result obj1;
	obj1.get_number(111);
	obj1.get_marks(75.0,60.5);
	obj1.display();
	}
