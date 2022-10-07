#include<iostream>
using namespace std;
    void area(int a)
   {
	cout<<"area of square="<<(a*a)<<endl;
   }
   void area(int a,int b)
   {
   	cout<<"area of rectangle="<<(a*b)<<endl;
	} 
	void area(double a,double b)
	{
		cout<<"area of triangle="<<((0.5)*a*b)<<endl;
	}
	void area(double a)
	{
		cout<<"area of circle="<<(3.14*a*a)<<endl	;
	}
	int main()
	{
		area(5);
		area(2,3);
		area(1.22,2.22);
		area(3.33);
		return 0;
	}
