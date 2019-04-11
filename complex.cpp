#include<iostream>
using namespace std;
class complex
{
private:
	float real;
	float img;
public:
complex(){ }

complex operator +(complex c)
{
complex c3;
c3.real=real+c.real;
c3.img=img+c.img;
return c3;
}
friend ostream & operator << (ostream &out, complex &c) 
{ 
    out << c.real; 
    out << "+i" << c.img << endl; 
    return out; 
} 
friend istream & operator >> (istream &in, complex &c) 
{ 
    
    in >> c.real; 
    in >> c.img; 
    return in; 
} 




};
int main()
{
complex c1;
cout<<"enter the real and img part";
cin>>c1;
cout<<c1;
complex c2;
cout<<"enter the real and img part";
cin>>c2;
cout<<c2;
complex c3=c1+c2;
cout<<c3;
cout<<"Welcome";
return 0;
}
