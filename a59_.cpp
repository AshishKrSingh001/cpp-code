#include <iostream>
using namespace std;
class test
{
    private: 
    int x;
    public:
    void getdata()
    {
        cout<<"Enter a number: "<<endl;
        cin>>x;
    }
    void putdata()
    {
        cout<<"Data: "<<x<<endl;
    }
};
int main()
{
    test *t;
    t = new test;
    // t->getdata();
    // t->putdata();
    (*t).getdata();
    (*t).putdata();
    delete(t);
    return 0;
}