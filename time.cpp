#include<iostream>
using namespace std;
class minutes
{
int m;
public :
minutes(int m) { this->m=m;}
void display(){cout<<m;}
};
class hours
{
int h;
public:
hours(int h){this->h=h;}
operator minutes()
{
return h*60;
}
void display(){cout<<h;}
};
int main()
{
minutes m=5;
m.display();
hours h=6;
h.display();
minutes k=h;
k.display();
return 0;
}

