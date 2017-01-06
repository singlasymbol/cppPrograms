#include<iostream>

using namespace std;

class student
{
	protected:
	int rno,m1,m2;
	
	public:
	
	void get()
	{
		cout<<"enter roll number\n";
		cin>>rno;
		
		
		cout<<"enter the marks in both subject\n";
		cin>>m1>>m2;
		
	}
};

class sports
{
	protected:
	
	int sm;
	
	public:
	
	void get_sm()
	{
		cout<<"enter the sports marks\n";
		cin>>sm;
	}
};

class statement:public student,public sports
{
	int tot,avg;
		
	public:
	
	void display()
	{
		tot=m1+m2+sm;
		avg=tot/3;
		
		cout<<"Roll no:"<<rno<<endl;
		cout<<"Total :"<<tot<<endl;
		
		cout<<"Avg :"<<avg<<endl;
	}
};

main()
{
	statement obj;
	
	obj.get();
	obj.get_sm();
	obj.display();
}
