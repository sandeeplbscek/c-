#include<iostream>
using namespace std;
class unary
{
private:
int count;
public:
unary() { count=0; }
unary(int count){
	this->count=count;
}



/*void operator ++()
{
count=count+1;
}*/
void operator ++(int)
{
count=count+1;
}


unary operator ++()
{
count=count+1;
//unary temp;
//temp.count=count;
return unary(count);
}
void display()
{
cout<<count;
}
};
int main()
{
unary a;
a.display();
//++a;
unary b=++a;

b.display();
b++;
b.display();

cout<<"Welcome";
return 0;
}
