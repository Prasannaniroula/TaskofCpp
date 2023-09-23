//Wap to show function override

#include<iostream>
using namespace std;
class A{
	public:
		void display(){
			cout<<"Base class \n";
		}
};
class B: public A{
	public:
		void display(){
			cout<<"Derived class \n";
		}
};
int main(){
	B bb;
	bb.display();//this function call will call the function of class B
	return 0;
}

