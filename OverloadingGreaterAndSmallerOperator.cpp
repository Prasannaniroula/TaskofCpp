#include<iostream>
using namespace std;
class overload{
	int a;
	public:
		overload(int x){
			a=x;
		}
		int operator >(overload x){
			if(a>x.a){
			    return 1;
			}
			else{
				return 0;
			}
		}
		int operator <(overload x){
			if(a<x.a){
				return 1;
			}
			else{
				return 0;
			}	
        }
};
int main(){
	int a,b;
	cout<<"Enter two values: \n";
	cin>>a>>b;
	overload o1(a),o2(b);
	//for > operator
	if(o1>o2){
		cout<<a<<" is greater than "<<b<<"\n";
	}
	else{
		cout<<b<<" is greater than "<<a<<"\n";
	}
	//for <operator
	if(o1<o2){
		cout<<a<<" is less than"<<b<<"\n";
	}
	else{
		cout<<b<<" is less than o1"<<a<<"\n";
	}

return 0;
		
	
	
}
