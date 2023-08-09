#include <iostream>

using namespace std;

 class B
 {
	public:
	B()
	{
		cout<<"base constructor:"<<endl;
	}
	virtual ~B()
	{
		cout<<"base destructor:"<<endl;
	}
 };
  class D:public B
 {
	public:
	D()
	{
		cout<<"derived constructor:"<<endl;
	}
	~D()
	{
		cout<<"derived destructor:"<<endl;
	}
 };
 int main()
 {
	B *ptr = new D();
	delete ptr;
	return 0;
 }