#include <iostream>
using namespace std;
class A
{
    public:
        void show()
        {
            cout<<"HI\nThis is Ashish"<<endl;
        }
};
class B:public A
{
    public:
        void show()
        {
            cout<<"HI\nMy name is Ashish"<<endl;
        }
};
int main()
{
    // B t;
    // t.show();
    B *p;
    B z;
    p=&z;
    p->show();
    return 0;
}
