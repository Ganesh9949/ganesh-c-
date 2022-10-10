#include<iostream>
using namespace std;
int main()
{
	char chupper,chlower;
	int ascii;
	cout<<"enter the character(in upper case):";
	cin>>chupper;
	ascii=chupper;
	ascii=ascii+32;
	chlower=ascii;
	cout<<"\n its lowercase:"<<chlower;
	cout<<endl;
	return 0;
}
