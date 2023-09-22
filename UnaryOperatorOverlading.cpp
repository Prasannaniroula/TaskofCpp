//Postfix
#include<iostream>
using namespace std;
class prasanna{
	int x;
	public:
		void get(){
			cout<<"enter value of x="<<endl;
			cin>>x;
		}
		void display(){
			cout<<"value of x="<<x<<endl;
		}
		void operator ++(int){
			x += 1;
		}
		void operator ++(){
			x+=1;
		}
};
int main(){
	prasanna p1,p2;
	//postfix
	p1.get();
	cout<<"before overloading:"<<endl;
	p1.display();
	cout<<"after overloading:"<<endl;
	p1++;
	p1.display();
	//prefix
	p2.get();
	cout<<"before overloading:"<<endl;
	p2.display();
	cout<<"after overloading:"<<endl;
	++p2;
	p2.display();
	return 0;
}
