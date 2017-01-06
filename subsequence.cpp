#include<iostream>

using namespace std;

int main(){
int n;
//    cout<<"please enter the size of array"<<"\n";	
	//cin>>n;
int y;

	int i,j,k,count=0,arr[11]={10,20,9,33,21,23,50,41,48,60,80},index;
	int max=0;
n=11;
/*	for(i=0;i<n;i++)
	{
		cout << "enter the "<< i+1 << "element of the array"<<"\n";
		cin>>arr[i];
	}
*/
	for(j=0;j<=n;j++)
	{
	 count=0;	
	 
			y=arr[j];
		for(i=j;i<=n;i++)
		{
		
			
			if(y<arr[i+1])
			{
				y=arr[i+1];
				count++;
			}
	
			if(max<count)
			{
				max=count;
				index=j;
			}
		}
	}
	
	cout<<"max is"<<max<<"\n";
	cout<<"index is "<<index<<"element is"<<arr[index]<<"\n";
	
			y=arr[index];
			
			for(i=index;i<=n;i++)
			{	
				if(y<arr[i+1])
				{
					cout<<y<<"\n";
					y=arr[i+1];
				}
			}
		}
	

	
				//={50,15,22,9,10,12,33,21,41,16,80
