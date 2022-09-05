#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=5;
	b=3;
	c=6;
	d=8;
	if(a>b && a>c && b>d)
	{
		cout<<"a is greater";
	}
	else if(b>a && b>c && b>d)	
    {
    	cout<<"b is greater";
	}
	else if(c>b && c>a && a>c)
	{
		cout<<"c is greater";
	}
	else 
	{
		cout<<"d is greater";
	}
}
		
	
	

