#include<iostream>
#include<math.h>
using namespace std;

class phani  //base class
{
public: //access specifier
int num, r; //date number
};
class yuvan  //derived class
{
public:  
     //access specifier
int sum=0, temp_num; 
};
class sumanth: public phani, public yuvan // parent class
{
public:        //access specifier
int function()
{
cout << "Enter number to check Armstrong number ";
cin>>num;
temp_num = num;
while(num > 0)
{
r = num % 10;
sum = sum + (r * r * r);
num = num / 10;
}
if(temp_num == sum)
cout << "Entered number is Armstrong Number." << endl;
else
cout << "Entered number is not Armstrong Number." << endl;
}
};
int main()   //main function
{
sumanth obj;
obj.function();
}
