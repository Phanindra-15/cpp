#include<stdio.h>  
using namespace std;
class digit 
{ 
public:
int n,m;
};
class digit2
{
	public:
	int sum=0;
};
class digit3:public digit,public digit2
{
	public:
	void function()
	{   
printf("Enter a number:");    
scanf("%d",&n);    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
}
};
int main()
{
	digit3 obj;
	obj.function();
}
