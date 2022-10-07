#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter number of rows to print";
	cin>>n;
	for(i=1;i<=n;i++){
		for (j=1;j<=i;j++){
			cout<<"*";
		}
			cout<<endl;
			
		}
	return 0;
}
