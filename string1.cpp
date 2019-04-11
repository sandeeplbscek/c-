#include<iostream>
using namespace std;
class string1
{
	private:
	char a[100];
	public:
	string1(){}
	string1(char p[])
	{
	  int i=0;
		while(p[i]!='\0')
		{
		a[i]=p[i];
		i++;
		}
		a[i]='\0';		
	}
	void display()
	{
	cout<<a;
	}
	string strcat(string k)
	{
		string q;
		int i=0;
		while(k.a[i]!='\0')
		{
		q.a[i]=k.a[i];
		i++;
		}
		int j=0;
		while(this->a[i]!='\0')
		{
		q.a[i]=this->a[i];
		i++;
		}
		q.a[i]='\0';

	}
};

	 



int main()
{
char a[100];
cout<<"enter the string";
cin>>a;
string1 k=a;
k.display();
return 0;
}
