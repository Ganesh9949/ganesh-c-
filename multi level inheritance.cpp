#include<iostream>
using namespace std;

class A {
	public:
		void display() {
			cout<<"base class content.";
		}
};

class B : public A {};

CLASS C : public B {};

int main() {
	c obj;
	obj.display();
	return 0;
}

