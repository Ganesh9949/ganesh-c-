#include<iostream>
using namespace std;
int main()
{
	int i,a[100],avg,sum=0;
	cout<<"enter the number of elemwnts";
	for(i=1;i<=5;i++){
		cin>>a[i];
		sum=sum+a[i];
		avg=sum/5;
	}
	cout<<"The average of an array is"<<avg;
	}
