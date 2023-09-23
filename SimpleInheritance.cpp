//Create a class person with data member name and age.Use appropriate member function to read and display the detail. Derive a class Employee 
//form class person with data member salary and designation.Use appropriate member function to enter and display the detail of employee.(simple
// inhertance).

#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	public:
		void put(){
			cout<<"Enter name and age:";
			cin>>name>>age;
		}
		void give(){
			cout<<"Name = "<<name;
			cout<<"Age = "<<age;
		}
};
class employee : public person{
	int salary;
	string designation;
	public:
		void get(){
			cout<<"Enter the salary and designation:";
			cin>>salary>>designation;
		}
		void display(){
			cout<<"Salary = "<<salary;
			cout<<"Designation = "<<designation;
		}
};
int main(){
	employee e;
	e.put();
	e.get();
	e.give();
	e.display();
	
}
