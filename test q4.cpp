#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=5;
	b=3;
	c=10;
	d=4;
	if(a>b && a>c)
	{
		cout<<"a is greater";
	}
	else if(b>c && b>d)
	{
		cout<<"b is greater";
	}
	else if(c>d && c>a)
	{
		cout<<"c is greater";
	}
	else
	{
		cout<<"d is greater";
	}
	return 0;
}

