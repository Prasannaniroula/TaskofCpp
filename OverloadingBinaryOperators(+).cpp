//Create a class weight with data member kg and gram. Use appropriate member function to initialize and display their values.Using the concept 
//of operator overloading. Wap to overload binary (+) operator.(Add two different weights)
#include<iostream>
using namespace std;
class weight{
	int kg, gm;
	public:
   void get(){
   	cout<<"Enter the weight in kg and gm:"<<endl;
   	cin>>kg>>gm;
   }
	void display(){
	   cout<<"Kg="<<kg<<endl;
	   cout<<"gm="<<gm<<endl;
	}
	weight operator + (weight & w2){
		weight temp;
		int totalgrams=(kg*1000+gm)+(w2.kg*1000+gm);
		temp.kg= totalgrams/1000;
		temp.gm = totalgrams%1000;
		return temp;
	}
};
int main(){
	weight w1,w2;
	w1.get();
	w2.get();
	weight w3= w1 + w2;
	w3.display();
	return 0;
}
