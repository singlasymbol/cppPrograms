/* there are three possibilities of data conversion in classes.
FIRST is conversion from basic data type to user defined data type or class type.
---it is automatically done by complier wwith the help of inbuilt routines or by applying typpe-casting.
---the left hand operand of assignment operator is always class type and the right hand operand is always basic type.
---


SECOND-conversion from class type to basic type.
----in this type of conversion the programmer needs to explicitly tell the compoler how to perform conversion from class to basic type.such type of conversion is also known as overloading f typecast operator.
---the compiler firt searches for the operator keyword,followed by data type and if it is defined ,the it applies the conversion functions as defined by the programmer.
---left hand operand is always of basic data type.and the right hand operand is of class type.the conversion fucntion should not hvae any arguments and it should be a class member function  with no return type.

THIRD-conversion from one class type to another class type;
---

consider tehere are two classes class a and class b and if we write obj1=obj b i.e. converison of type b of obj b to obj a of type a ..... user can either use a conversion function or a constructor with ne argument depending upn whether it is specified in source class ,then it will hold conversion function. and if a handles conversion then it wil do that through a constructor i.e. a argument of type class b.


CONVERSION IN SOURCE CLASS;

syntax- operator type ()
{
}
where type name may be built in or user defined data type

CONVERSION IN DESTINATION CLASS;

class A(class b obj b) 
{
}


*/

#include<iostream>

using namespace std;

class data
{
	int x;
	float f;
	
	public:
	
	data()
	{
		x=0;
		f=0;
	}

	operator int()
	{
		return x;
	}
	
	operator  float()
	{
		return f;
	}
	
	data(float m)
	{
		x=2;
		f=m;
	}
	
	void show()
	{
		cout<<"x is "<<x;
		cout<<"f is"<<f;
	}

};

main()
{
	int j;
	float f;
	data a;
	
	a=5.5;
	
	j=a;
	f=a;
	
	cout<<"value of j ="<<j;
	cout<<"value of f="<<f;
}
		
