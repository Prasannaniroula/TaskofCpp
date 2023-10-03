// Wap to calculate the Simple interest and Compound Interest using the concept of function template
#include<iostream>
#include<cmath>
using namespace std;
 template <class T>
 T SI(T p, T t, T r){
    T si;
    si= (p*t*r)/100;
    cout<<"The S.I is ="<<si<<endl;
 }
  template <class T>
 T CI(T p, T t, T r){
 	T ci;
 	ci= p * pow((1 + r / 100), t) - p;
 	cout<<"The C.I is ="<<ci;
 }
 int main(){
 	float p=25000, t=5, r=25;
 	SI(p,t,r);
 	CI(p,t,r);
 	return 0;
 }
