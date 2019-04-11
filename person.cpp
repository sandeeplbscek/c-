#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
	string name;
public:
	person(){name="";}
	void getdata_person
			(string k){
		name=k;
		}
	
};

class employee: public 
		virtual person
{
protected:
	int emp_id;
public:
	employee(){emp_id=0;}
	void getdata_employee
			(int id)
	{
	emp_id=id;
	}
	
};

class student:public virtual person
{
protected:
	int student_id;
public:
	student() { student_id=0;}
	void getdata_student(int id)
	{
	student_id=id;
	}
	
};


class ta: public student,
		public employee
{
private:
	int ta;
	
public:
	
	void ta_calculator()
	{
	 if(student_id!=0)
		ta=500;
	 else
		ta=1000;	
	}
	void display()
	{
	if(student_id!=0)
		cout<<name
		<<student_id<<ta<<"\n";
	else
		cout<<name<<
		emp_id<<ta<<"\n";
	}
		
	
};

int main()
{
ta t;
t.getdata_person("sam");
t.getdata_student(12);
t.ta_calculator();
t.display();

ta t1;
t1.getdata_person("manu");
t1.getdata_employee(121);
t1.ta_calculator();
t1.display();



return 0;
}
