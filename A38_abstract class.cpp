#include <iostream>
using namespace std;

class B
{
    public:
    virtual void show()=0;
    void display()
    {
        cout<<"Hello"<<endl;
    }
};
class D:public B
{
    public:
    void show()
    {
        cout<<"Hi"<<endl;
    }
};
int main()
{
    D t;
    t.show();
    t.display();
    // B p; Not allowed;
    return 0;
}
