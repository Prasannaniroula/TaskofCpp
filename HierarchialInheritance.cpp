//Create a class polygon with data member length and width as protected access specifier.Derive two different class triangle and rectangle from
//the class polygon and calculate the area of triangle and rectangle and display them.

#include<iostream>
using namespace std;
class polygon{
	protected:
	int length , width;
	public:
		void get(){
			cout<<"enter the value of length and breadth:";
			cin>>length>>width;
		}
		
};
class triangle:public polygon{
	int area_t;
	public:
		void area_triangle(){
			area_t = (length*width)*(0.5);
		}
		void display_t(){
			cout<<"Area of triangle = "<<area_t<<endl;
		}
};
class rectangle:public polygon{
	int area_r;
	public:
		void area_rectangle(){
			area_r= length*width;
		}
		void display_r(){
			cout<<"Area of rectangle = "<<area_r<<endl;
		}
};
int main(){
	triangle t;
	rectangle r;
	//for area of triangle
	t.get();
	t.area_triangle();
	t.display_t();
	//for area of rectangle
	r.get();
	r.area_rectangle();
	r.display_r();
	
	return 0;
	
}

