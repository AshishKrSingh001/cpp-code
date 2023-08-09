#include <iostream>
using namespace std;
class Employee
{
    protected:
        int id;
        string name;
        Employee()
        {
            cout<<"Enter your Id and name(respectively):"<<endl;
            cin>>id>>name;
        }
};
class Post:public Employee
{
    protected:
    string dept,post;
    Post()
    {
        cout<<"Enter your department and post(respectively):"<<endl;
        cin>>dept>>post;
    }
};
class personal_details
{
    protected:
        int age;
        string m_no;
        personal_details()
        {
            cout<<"Enter your age and Mobile number(respectively):"<<endl;
            cin>>age>>m_no;
        }
};
class display:public Post,public personal_details
{
    public:
        display()
        {
            cout<<"Name: "<<name<<endl<<"Id: "<<id<<endl<<"Department: "<<dept<<endl<<"Post: "<<post<<endl<<"Age: "<<age<<endl<<"Mobile no: "<<m_no<<endl;
        }
};
int main()
{
    string siddhant="8409440208";
    display d;
    return 0;
}