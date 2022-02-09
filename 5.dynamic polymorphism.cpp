
#include <iostream>
using namespace std;

class base
{
public:
	 void show ()
	{ cout<< "print base class" <<endl; }

	void show ()
	{ cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
    virtual void print ()
	{ cout<< "print derived class" <<endl; }

	void show ()
	{ cout<< "show derived class" <<endl; }
};

//main function
int main()
{
	base *baseptr;
	derived d;
    baseptr = &d;	

	baseptr->print();
	

	baseptr->show();

	return 0;
}

