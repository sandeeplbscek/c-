#include<iostream>
#include<string>
using namespace std;
class student
{
protected:
	string name;
	int number;
public:
	student() {
		name="";
		number=0; 
		}
	void read(string k,int n){
		name=k;
		number=n;
		}
	void display(){ 
		cout<<name<<number;
		}
};
int main()
{
cout<<"enter number of students";
int n;
cin>>n;
student *c;
c=new student[10];
for(int i=0;i<n;i++)
{
cout<<"enter the name";
string name;
cin>>name;
cout<<"enter roll number";
int rollnumber;
cin>>rollnumber;
(c+i)->read(name,rollnumber);
(c+i)->display();
}

return 0;
}
