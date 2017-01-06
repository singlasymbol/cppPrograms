#include<iostream>

using namespace std;

class b;

class a
{
friend class b;
	int x,y;
	
	public:
		
		void get_data()
		{
		cout<<"enter the distances";
		cin>>x>>y;
		}
}s;

class b
{
	int q,w;
	
	public:
	
	void get_data()
	{
	cout<<"for second ones";
	cin>>q>>w;
	}
	
	void sum(a s)
	{
		cout<<s.x+s.y+q+w;
	}
	
}t;

 main()
{
	s.get_data();
	t.get_data();
	t.sum(s);
}
