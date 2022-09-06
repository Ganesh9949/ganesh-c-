#include<iostream>
int main()
{
	int r,c a[100][100], b[100][100], sum[100][100], i, j;
	
	cout<<"enter the number of rows (between 1 and 100): ";
	cin>> r;
	
	cout<<"enter the number of columns (between 1 and 100); ";
	cin>> c;
	
	cout<< end1 <<"enter the elements of 1st matrix: "<<end1;
	
	for(i=0; i < r; ++i)
	for(j=0; j < c; ++j)
	{
		cout<<"enter element a" << i + 1 << " : ";
		cin>> a[i][j];
	}
	
	cout<< end1 <<"enter the elements if 2nd matrix: "<<end1;
	for(i = 0; i < r; ++i)
	for(j = 0; j < c; ++j)
	{
		cout<<"enter element b" << i + 1 << j+1 << " : ";
		cin>>b[i][j];
	}
	
	for(i=0; i < r; ++i)
	for(j=0; j < c; ++j)
	sum[i][j] = a[i][j] + b[i][j];
	
	cout<<end1 <<"sum of two matrix is: "<<end1;
	for(i = 0; i < r; ++i)
	for(j = 0; J < c; ++j)
	{
		cout<<sum[i][j] <<" ";
		if(j == c - 1)
		cout<<end1;
	}
	
	return 0;
}
