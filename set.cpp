#include<iostream>
#include<string>
using namespace std;
class set
{
private:
	int a[100];
	int size;
public:
	set() { }
	set(int n)
	{
	 size=n;
	 for(int i=0;i<size;i++)
		cin>>a[i];
	}	
	set operator +(set s)
	{
	 set k;
	 set temp;
	 int flag=0;
	 int l=0;
	 int m=0;
	 for(int i=0;i<this->size;i++)
		{
		for(int j=0;j<s.size;j++)
			{
			if(this->a[i]==s.a[j])
			   {
			    flag=1;		
			    break; 
			    }		
			}
			if(flag==0)
			  {	
			   k.a[l]=this->a[i];
			   l=l+1;
			  }

			else
			  {
			   k.a[l]=this->a[i];
			   l=l+1;
			   temp.a[m]=this->a[i];
			    m=m+1;
			   }
		 flag=0;		
		}
	 temp.size=m;
         
	 for(int i=0;i<s.size;i++)
		{
		 flag=0;
		for(int j=0;j<temp.size;j++)
		 {
		   if(s.a[i]==temp.a[j])
			{
			  flag=1;
			   break;
			}
		 }		
                 if(flag==0)
		    {
			k.a[l]=s.a[i];
			   l=l+1;

		    }	  
	 }
         k.size=l; 
	 return k; 	
	}
 void display()
	{
	 for(int i=0;i<size;i++)
         	cout<<a[i];
	}

	
};
int main()
{
 
 cout<<"first set";
 set p(3);
 p.display();
  
 cout<<"second set";
 set q(2); 	
 q.display(); 
 set r=p+q;
 cout<<"\nunion is"; 	
 r.display(); 
return 0;
}
