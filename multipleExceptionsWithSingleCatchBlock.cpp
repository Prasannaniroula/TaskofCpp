#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	cout<<"Enter two  numbers:";
	cin>>i>>j;
	try{
	
	if(j==0){
		throw (j);
	}
	if(j<0){
		throw (j);
	}
	else{
		k=i/j;
		cout<<"the division is : "<<k;	
	}
}
	catch(...){
		cout<<"This thing is not possible";
	}
}
