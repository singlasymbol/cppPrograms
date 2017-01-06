/*they RE OVERLOADED TO TAKE CHARGE OR CONTROL OVER HOW TO ALLOCATE MEMORY.it ALLOW USERS TO DEBUG THE PROGRAM AND KEEP TRACK OF MEMORY ALLOCATION AN DE-ALLOCATION IN THE PROGRAM.
tO ALLOW THE USERS TO PERFORM ADDITIONAL OPERATIONS WHILE ALLOCATING OR DE-ALLOCATING MEMORY.
SYNTAX ;-
VOID *OPERATOR NEW(SIZE_T NUM);//VOID * TELLS THAT IT CAN RETURN ANY POINTER.

VOID OPERATOR DELETE(VOID *PTR); 


overloaded new operator recieves the parameter num,which is the no. of memory to be allocated.the return type of new must be void * bcz t is expected to return a pointer to the beginning of the block of the memory allocated.

overloaded delete operator should not return anything.

*/



#include<iostream>

using namespace std;

class myclass
{

	public:

	myclass()
	{
		cout<<"constructor added\n";
	}

	~myclass()
	{
		cout<<"destructor created\n";
	}

};

int main()
{
	myclass * obj=new myclass();
	
	delete obj;
	
	return 0;
}
