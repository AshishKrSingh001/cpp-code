/*

*/
#include <iostream>
using namespace std;
class person
{
    protected:
    string name;
    public:
    void setdata()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
    }
    virtual void display()=0;
};
void person::display(){}
class faculty:public person
{
    protected:
    string post;
    public:
    virtual void getdata()
    {
        person::setdata();
        cout<<"Enter id: "<<endl;
        cin>>post;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Id: "<<post<<endl;
    }
};
class student:public person
{
    protected:
    int id;
    public:
    void getdata()
    {
        person::setdata();
        cout<<"Enter id: "<<endl;
        cin>>id;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl;
    }
};
int main()
{    
    faculty f;
    f.setdata();
    f.getdata();
    f.display();
    student s;
    s.setdata();
    s.getdata();
    s.display();
    return 0;
}