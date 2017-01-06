///it is the lookout table of function pointer used to dynamicaally bind the virtual functions to the objects at runtime.every class that uses virtual function is given its own virtual table as a secret data member.
///it is also known as virtual method table,virtual function table or dispatch table,each row of this table pints to the virtual function.
//vpointer is a hidden pointer added by compiler to the base class.it is inherited to all the derived classes.


#include<iostream>

using namespace std;

class Base
{
	public:

	virtual void function1()
	{
		cout<<"base ::function1()\n";
	}
	
	
	virtual void function2()
	{
		cout<<"base ::function2()\n";
	}
	
	virtual~Base()
	{}
};
	
class D1:public Base
{
	public:
	~D1()
	{}
	
	virtual void function1()
	{
		cout<<"D1::function1\n";
	}
};

class D2:public Base
{
	public:
	
	~D2()
	{}
	
	virtual void function2()
	{
		cout<<"D2::function2\n";
	}
};

main()
{
	D1 *d=new D1;
	Base *b=d;
	b->function1();
	b->function2();
	delete b;
}

