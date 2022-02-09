#include<iostream>
using namespace std;
class triangle
{
public:
int r,s,i,j,c;
void input()
{
cout<<"num of rows:";
cin>>r;
for(i=0;i< r;i++)
{
for(s=1;s<=r-i;s++)
{
cout<<" ";
}
for(j=0;j<=i;j++)
{
if(j==0||i==0)
{
c=1;
}
else
{
c=c*(i-j+1)/j;
}
cout<<c<<" ";
}
cout<<endl;
}
}
};
int main()
{
triangle obj;
obj.input();
}
