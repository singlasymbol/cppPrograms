#include<iostream>

using namespace std;

class data
{
	int x;
	int y;
	char *str;
	char a[20];
	public:
	data(char s[100])
	{
		str=s;
		cout<<"address is "<<str<<"\n";
		//cout<<&s<<"\n";
	
	}
	void check()
	{
	for(int i=0;i<10;i++){
	cin>>a[i];
	str=a;
	cout<<str++;
	}
	}
	void show()
	{
		while((*str)!='\0')
		{
			cout<<*str;
			*(str++);
			
		}
		cout<<"\n";
	}		

	void compare(data x2)
	{
	}	
			
	
};
	
int main()
	{
	
		data d1("construction");
		data d2("construction 1");
		d1.check();
		d2.check();
		d1.show();
		d2.show();
				//d1.compare(d2);
		
		return 0;
	}
		
