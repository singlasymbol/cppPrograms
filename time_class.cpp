#include<iostream>

using namespace std;

class time
{
	int i,j,k,l,h,m;
	public:
	
	void get_time()
	{
		cout << "please enter the time\n";
		cin >> h >> m;
		
	}
	friend void solve(time s1,time s2)
	{
 		time s3;
 		int flag=0;
 		s3.m = s2.m + s1.m;
 			
		if(s3.m >= 60)
		{
			s3.m = s3.m%60;
			flag = 1;
		}
		if(flag == 1)
		s3.h = s2.h + s1.h + 1;
		else
		s3.h = s2.h + s1.h;
	
	cout << "the desired hours are\n" << s3.h;
	cout << "the desired minutes are\n" << s3.m;

	}
}t1,t2;

int main()
{
	int i,j,k,l;
	
	t1.get_time();
	t2.get_time();
	
	solve(t1,t2);
	
}
	
		
