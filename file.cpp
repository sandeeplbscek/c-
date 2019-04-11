#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
char a[100];

cin.getline(a,100);
ofstream outfile("hello.txt");
int i=0;
while(a[i]!='\0') {
	outfile.put(a[i]);
	i++;
	}

outfile.close();
/*ifstream infile("hello.txt");
char c[100];
while(infile)
{
infile.getline(c,100);
cout<<c<<"\n";
}


outfile.close();
*/
return 0;
}