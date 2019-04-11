#include<iostream>
#include<string>
using namespace std;
class employee
{
protected:
	string name;
	int number;
public:
	
	employee(string k,int n){
		name=k;
		number=n;
		}
	void display(){ 
		cout<<name<<number;
		}
};

class student
{
private:
	string degree;
	string university_name;
public:
	
	student(string de,string university)
		{
		degree=de;
		university_name=university;
		}
	
	
};


class manager:public employee, public student
{
private:
	string title;
	int club_due;
public:
	
	manager(string name,int number,string title,int due,string degree,string university)
			: employee(name,number),
			student(degree,university)
		{
		this->title=title;
		club_due=due;
		}
	void t()
	{
	cout<<name;
	}	
	
};

class laborer:public employee
{

public:
	
	laborer(string name,int number):
		employee(name,number){
				}
	void t()
	{
	cout<<name;
	}
	
};

class foreman:public laborer
{
private:
	int number_items;

public:
	
	foreman(string name,int number,int item):
		laborer(name,number){
		number_items=item;
				}
	
	
};







/*class counterDn:public counter
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

};*/


int main()
{
manager k("sa",10,"asa",3000,"lbs","btech");
k.display();
k.t();
laborer k1("sa",10);
k1.t();
foreman k2("sa",100,25);
k2.display();

/*++k;
k.display();
--k;
k.counter::display();
*/
return 0;
}
