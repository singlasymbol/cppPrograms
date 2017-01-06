#include<iostream>

using namespace std;

int main()
{
    int i,j,k,arr[100],*ptr,**ptr1;
    
    cout<<"enter the size of array\n";
    cin>>j;
    
    cout<<"enter the values of the array\n";
    
    for(i=0;i<j;i++)
    {
    	cin>>arr[i];
    }
    
    for(i=0;i<j;i++)
    {
    ptr=&arr[i];
    ptr1=&ptr;
//-    cout<<"using ptr the address of "<<i<<"element is"<<ptr<<"\n";
    
    cout<<"using ptr1 the address of "<<i<<"element is"<<*ptr1<<"\n";
    }
   }
