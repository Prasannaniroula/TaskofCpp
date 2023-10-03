// Wap to calculate the sum of two integer and floating point number using the concept of function template

#include<iostream>
using namespace std;
template <class t>
t sum(t a, t b){
 return (a+b);	
}
int main(){
	int x=5, y=6;
	float p=4.5,q=7.2;
	cout<<"The sum of two integer number is:"<<sum(x,y)<<endl;
	cout<<"The sum of two floating point number is:"<<sum(p,q);
	return 0;
}

