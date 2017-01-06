#include<iostream>
#include<vector>

int odd(int i)
{
	int j;
	j=i%2;
	
	if(j==0)
	return 0;
	
	else 
	return 1;
}


main()
{	

	vector<int>x,y;
	vector<int>::iterator it;
	
	for(int i=0;i<10;i++)
	{
		x.push_back(i);
	}
	
	y.resize(x.size());
	
	
	replace_copy_if(x.begin(),x.end(),y.begin(),odd,0);
	
	cout<<"y contains"<<endl;
	
	for(it=y.begin();it!=y.end();it++)
	{
		cout<<*it<<endl;
	}
	
}	
	
