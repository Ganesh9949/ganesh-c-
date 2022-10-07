#include<iostream>
using namespace std;
int main()
{
	int i,n,j,a[100],t;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter all elements";
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++){
			if(a[i]>=a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
    for(i=1;i<=n;i++)
    cout<<a[i];
    cout<<"max number"<<a[1]<<endl;
    cout<<"min number"<<a[n]<<endl;
    cout<<"sum of max and min is"<<a[1]+a[n]<<endl;
    cout<<"dff of min and max is"<<a[n]-a[1]<<endl;
}

