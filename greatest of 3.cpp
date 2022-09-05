#include<iostream>
int main()
{
	int a,b,c;
	a=4;
	b=8;
	c=6;
	if(a>b and a>c)
	{
		std::cout<<"a is greater";
	}
	else if(b>a and b>c)
	{
		std::cout<<"b is greater";
	}
	else
	{
		std::cout<<"c is greater";
	}
	return 0;
}
