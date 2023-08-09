#include <iostream>
using namespace std;
class A
{
    private: int prv;
    protected: int pro;
    public: int pub;
    A(int a,int b,int c)
    {
        prv=a;pro=b;pub=c;
    }
    friend class B;
};
class B
{
    public:
    void show(A &a);
};
void B::show(A &a)
{
    cout<<"Private: "<<a.prv<<endl<<"Protected: "<<a.pro<<endl<<"Public: "<<a.pub<<endl;
}
int main()
{
    A a(20,30,40);
    B b;
    b.show(a);
    return 0;
}