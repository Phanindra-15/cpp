#include <iostream>
#include<conio.h>
using namespace std;

class snip  //base class
{
    int n1,n2,temp; //variables
	public:    //access specifier
	
	 void take()//entering data
	 {
	 	cout<<"enter two numbers";
	 	cin>>n1>>n2;

		 }
		 void get()//print 
		 {
		 	temp=n1;//temp=10
		 	n1=n2;//n1=20
		 	n2=temp;//n2=10
		 
		 	cout<<n1<<" "<<n2;
			 }	
};
int main()//main function
{
	snip obj;//object creation
	obj.take();//call method
	obj.get();//cal method
	getch();
}
