#include<iostream>
using namespace std;
int main()
{
	int i,j,rows,columns;
	rows=4;
	columns=5;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if(i==1 || i==rows || j==1 || j==columns)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
