// wap to implement the class template
#include<iostream>
using namespace std;
template <class T>
class Add{
	T first, second;
	public:
	 
	 Add(T a, T b){
	 	first = a;
	 	second =b;
	 }
	 void sum(){
	 	cout<<"The sum of two number is = "<<first+second<<endl;
	 }
}; 
int main(){
	Add <int> obj(10,20);
	obj.sum();
	return 0;
}
