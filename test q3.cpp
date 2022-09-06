#include<iostream>
using namespace std;
int main()
{
	int i, sum=1 ,a;
	cout <<"enter the number";
	cin >>a;
	for(i=1; i<=a; i++)
	{
		sum+=i;
	}
	cout<<"sum of natural number" <<sum;
}
