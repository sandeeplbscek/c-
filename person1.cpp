#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class person
{
protected:
	string name;
	int number;
public:
	person(){ }
	person(string k,int n){
		name=k;
		number=n;
		}
	void display(){ 
		cout<<name<<number;
		}
};

int main()
{
person p("sandeep",10);
ofstream outfile;
outfile.open("Group.txt",ios::out|ios::binary);
outfile.write(reinterpret_cast<char*>(&p), sizeof(p));
person q("deep",10);
outfile.write(reinterpret_cast<char*>(&q), sizeof(q));
outfile.close();

ifstream infile;
infile.open("Group.txt",ios::in|ios::binary);
//infile.read(reinterpret_cast<char*>(&p), sizeof(p));
//p.display();
infile.seekg(sizeof(person));

infile.read(reinterpret_cast<char*>(&q), sizeof(q));
q.display();

infile.close();





return 0;
}