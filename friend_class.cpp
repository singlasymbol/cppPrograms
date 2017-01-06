#include<iostream>

using namespace std;

class b;

class a
{
friend class b;
private:
int x;

public:
	void get_data()
	{
		cin>>x;
	}
	//friend void fun(int t.x,int s.y);
}t;

class b
{
//friend class a;
	int y;
	public:
void get_data()
{
	cin>>y;	
}
	void sum(a t)
	{
		int c=t.x+y;
		cout<<c;
	}
//	friend void fun(int t.x,int s.y);
}s;


main()
{
	t.get_data();
	s.get_data();
	s.sum(t);
}
	
	
	
