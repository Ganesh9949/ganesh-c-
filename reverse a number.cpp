#include<iostream>
using namespace std;
int main()
{
	int n,r,reverse=0;
	cout<<"enter the number";
	cin>>n;
	while(n>0);
	{
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
	cout<<reverse;
}
