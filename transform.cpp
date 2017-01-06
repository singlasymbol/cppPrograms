#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

///it performs operatiions on objects .there are two versions of transform 1 which uses a single range of input iterators 
///and another one which uses two ranges of input iterators.


int increase(int i)
{
	return ++i;
}

main()
{
	vector<int>x,y;
	
	for(int i=1;i<6;i++)
	{
		x.push_back(i*10);
	}
	
	y.resize(x.size());
	
	transform(x.begin(),x.end(),y.begin(),increase);
	//print y;
	
	}
