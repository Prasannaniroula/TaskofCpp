//Wap to show how an ambiguity can be resolved

#include<iostream>
using namespace std;
class a{
	public:
		void show(){
			cout<<"this is class A \n";
		}
};
class b{
	public:
		void show(){
			cout<<"this is class B";
		}
};
class c:public a,public b{
	
};
int main(){
	c d;
	d.a::show();
	d.b::show();
	return 0;
}
