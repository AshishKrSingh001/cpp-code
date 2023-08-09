#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    int b;
    int c;
    public:
    A(int x,int y,int z)
    {
        this->a = x;
        this->b = y;
        this->c = z;
    }
    friend int greatest(A);
    friend int smallest(A);
    ~A()
    {
        cout<<"Bye"<<endl;
    }
    
};
int greatest(A obj)
{
    return ((obj.a>obj.b && obj.a>obj.c)?obj.a:(obj.b>obj.c)?obj.b:obj.c);
}
int smallest(A obj)
{
    return ((obj.a<obj.b && obj.a<obj.c)?obj.a:(obj.b<obj.c)?obj.b:obj.c);
}



int main()
{
    A obj(10,20,30);
    
    cout<<"Greatest number: "<<greatest(obj)<<endl<<"Smallest number: "<<smallest(obj)<<endl;
    
    return 0;
}