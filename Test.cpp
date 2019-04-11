#include<iostream>
using namespace std;
class Test
{
int x;
public:
Test(){}
Test(int a)
{
x=a;
}
Test(const Test &k)
{
x=k.x;
}
void display() const
{
cout<<"dsd"<<x;

}



};
int main()
{
Test c(10);
Test c1(c);
Test const c2(c);
c.display();
c1.display();
c2.display();

return 0;
}
