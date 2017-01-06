//returns the result of accumulating of aalll values first,last to in it.
///h	`bznxv  uisdc  n,cgcv  nnavkjgiads  ambfsgd samvsa  sdyvs dvyvas binary operator.e																																																																F  			

#include<numeric>

int fun(int x,int y)
{
	return x+2*y;
}

main()
{
	int init=100;
	
	int a[]={10,20,30};
	
	cout<<"using default accumulate"
	
	cout<<accumulate(a,a+3,init);
	
	cout<<"using function"<endl;
	
	cout<<accumulate(a,a+3,init,fun);
}
