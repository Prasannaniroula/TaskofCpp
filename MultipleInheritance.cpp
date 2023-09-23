//Create a class academic with data member marks. Create another class extra with data members punctuality and discipline.Derive a class result 
//from academic and extra and calculate the total marks as the sum of marks, punctuality and discipline.Implement this in program.
#include<iostream>
using namespace std;
class academic{
	protected:
	int marks;
	public:
		void get(){
			cout<<"Enter marks:"<<endl;
			cin>>marks;
		}
};
class extra{
	protected:
		int punc,dis;
		public:
			void read(){
				cout<<"Enter the marks of punctuality and discipline:";
				cin>>punc>>dis;
			}
};
class result:public academic,public extra{
	int totalmarks;
	public:
		void sum(){
			totalmarks=punc+dis+marks;
        } 
		void display(){
			cout<<"The total marks of Extra activities and marks are = "<<totalmarks;
		}
		
};
int main(){
	result r;
	r.get();
	r.read();
	r.sum();
	r.display();
	return 0;
}
