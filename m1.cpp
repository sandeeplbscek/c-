#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int n;
cout<<"enter number of studets";
cin>>n;
char str[n][100];
for(int i=0;i<n;i++)
{
cout<<"enter the name\n";
cin>>str[i];
}
for(int i=0;i<n;i++)
{
cout<<str[i];
}

return 0;
}
