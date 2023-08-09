// WAP in c++ to implement multipath inheritance for the class diagram 
#include <iostream>
using namespace std;

class A
{
    public:
    int id;
    string name;
    A()
    {
        cout<<"Enter Id and Name:\n";
        cin>>id>>name;
    }
};
class B:public virtual A
{
    public:
    int sub1,sub2,sub3,sub4,sub5,t1_marks;
    B()
    {
        cout<<"Enter marks of 5 subject in 1st sem:\n";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
        t1_marks = sub1+sub2+sub3+sub4+sub5;
    }
};
class C:public virtual A
{
    public:
    int sub1,sub2,sub3,sub4,sub5,t2_marks;
    C()
    {
        cout<<"Enter marks of 5 subject in 2st sem:\n";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
        t2_marks = sub1+sub2+sub3+sub4+sub5;
    }
};
class D:public B,public C
{
    public:
    double avg;
    char grade;
    D()
    {
        avg = (t1_marks+t2_marks)/2;
        grade = 'A';
    }
    ~D()
    {
        cout<<id<<endl<<name<<endl<<t1_marks<<endl<<t2_marks<<endl<<avg<<endl<<grade<<endl;
    }
};


int main()
{
    D d;
    return 0;
}