#include<iostream>
using namespace std;
int main()
{
	int exp,i,base,power=1;
	cout<<"base and exponent:";
	cin>>base>>exp;
	for(i=0;i<=exp;i++)
	power=power*base;
	cout<<base<<"^"<<exp<<"="<<power;
	return 0;
}
