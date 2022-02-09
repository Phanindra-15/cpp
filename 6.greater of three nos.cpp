#include<stdio.h>
using namespace std;

class great
{
	public:
		int n1,n2;
};
class great2
{
	public:
		int n3;
    };
class great3:public great,public great2
    {
    	public:
    	void function()
    	{
    	cout<< "Enter three numbers: ";
        cin >> n1 >> n2 >> n3;
    		if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: " << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: " << n2;
    
    if(n3 >= n1 && n3 >= n2)
        cout << "Largest number: " << n3;
    }
	};
	int main()
	{
		great3 obj;
		obj.function();
	}
		
