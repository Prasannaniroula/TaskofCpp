//Wap to show the significance of exception handling by dividing the number with zero
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter two values:"<<endl;
	cin>>a>>b;
	try{
		if(b==0){
			throw(b); 
		}
		else{
			c=a/b;
			cout<<"The division is "<<c<<endl;
		}
	}
	catch(int b){
		cout<<"The division by "<<b<<" is not possible";
	}
	return 0;
}
