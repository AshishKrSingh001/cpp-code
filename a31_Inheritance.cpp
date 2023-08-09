#include <iostream>
#include <string>
using namespace std;

class Manager
{
    protected:
        int empId;
        string ename;
};
class Employee : private Manager
{
    public:
    Employee(int id,string name)
    {
        empId = id;
        ename.assign(name);
       
    }
    ~Employee()
    {
        cout<<"Employee ID: "<<empId<<endl<<"Name: "<<ename<<endl;
    }
};

int main()
{
    Employee emp1 = Employee(101,"Ashish");
    Employee emp2 = Employee(102,"Anish");
    return 0;
}