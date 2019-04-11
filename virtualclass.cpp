#include<iostream>
using namespace std;
class Shape
{

public :
	virtual int area()=0;
	int perimeter()
	{
	cout<<"hello";
	}
};
class rectangle: public Shape
{
 private: int length,breadth;
 public:
	rectangle(int a,int b)
	{
	length=a;
	breadth=b;
	}
	int area()
	{
	 return (length*breadth);
	}
	int perimeter()
	{
	 return (2*length*breadth);
	}		
	

};

class circle: public Shape
{
 private: int radius;
 public:
	circle(int a)
	{
	radius=a;
	}
	
	int area()
	{
	 return (3.14*radius*radius);
	}
	int perimeter()
	{
	 return (2*3.14*radius);
	}		
		
};

void process(Shape *p)
{
cout<<"area ="<<p->area()<<"\n";
cout<<"perimeter ="<<p->perimeter()<<"\n";


}




main()
{
Shape *p;
int k=p.area();
/*p=new rectangle(10,2);
process(p);
p=new circle(10);
process(p);
*/

	
}




