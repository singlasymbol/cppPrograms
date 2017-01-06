#include<iostream>
#include<vector>

using namespace std;

main()
{
	vector<int>e;
	
	e.push_back(5);	
	e.push_back(6);
	e.push_back(7);
	/*
	cout<<e.size()<<endl;
	cout<<e[0]<<endl
	cout<<e[1]<<endl;
	cout<<e[2]<<endl;
	*/
	for(int x=0;x<e.size();x++)
	{
		cout<<e[x]<<endl;
	}
	
	if(!e.empty())
	e.clear();
		
	vector<int>a;
	
	 a.push_back(10);
	 e.push_back(10);
	 
	 if(e==a)
	 {
	 	e.push_back(20);
	 }
	 
	 for(int y=0;y<e.size();y++)
	 {
	 	cout<<e[y]<<endl;
	 }
}

