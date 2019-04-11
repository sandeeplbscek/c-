#include<iostream>
using namespace std;
class counter
{
protected:
	int count;
public:
	counter(){  }
	counter(int k){count=k;}
	void display(){ cout<<count;}
	void operator++()
	{
	count=count+1;
	}
	
};
class counterDn:public counter
{
public :
	counterDn(){}
	counterDn(int k):counter(k)
	{

	}
	void operator --()
	{
	count=count-1;
	}
	void display() { cout<<"Welcome";}

};


int main()
{
counterDn k=10;
k.display();

++k;
k.display();
--k;
k.counter::display();

return 0;
}
