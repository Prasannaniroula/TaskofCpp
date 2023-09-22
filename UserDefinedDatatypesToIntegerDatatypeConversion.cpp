#include<iostream>
using namespace std;
class user{
	int hr,min;
	public:
	      user(){
	      	hr=0;
	      	min=0;
		  }
		  user(int x){
		  	hr=x/60;
		  	min=x%60;
		  }
		  void display(){
		  	cout<<"Hours = "<<hr<<" hr"<<endl;
		  	cout<<"Minutes = "<<min<<" min"<<endl;
		  }
};
int main(){
	user u;
	int a;
	a= 135;
	u=a;
	u.display();
	return 0;
	
}
