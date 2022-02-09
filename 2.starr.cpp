#include<iostream>
using namespace std;
class base                      //base class
{
public:                         //access specifier
int noofrows,sp,p,i,a;
};
class child: public base        //derived class
{
public:                         //access specifier
int pyramid()
{
cout<<"Enter the number of rows"<<endl;//print no of rows
cin>>noofrows;                  //read rows
{
for(i=1; i<=noofrows; i++)      //rows
{
for(sp=1; sp<=noofrows-i; sp++) //spaces
{
cout<<" ";                      //printing spaces
}
for(p=1;p<=(2*i-1);p++)         //stars
{
cout<<"*";
a++;	                  	//printing stars
}
cout<<endl;                     //new line
}
}
}
};
//main function
int main()
{
child obj;//object creation
obj.pyramid();//call method
}
