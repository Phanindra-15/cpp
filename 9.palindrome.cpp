#include <iostream>
using namespace std;
 class drome
 {
 	public:
 		void input()
 		{
		 
 		int n,temp;
 		{
		 
 		 cout<<"Enter the Number=";    
         cin>>n;    
         temp=n; 
 	    }
 	}
 };
 class series : public drome
 {
 	public:
 	int n,r,sum=0,temp;
 	void output()
 	{
 		while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
	}
 	};
 int main()
 {
 	series obj;
 	obj.input();
 	obj.output();
 	
 }
