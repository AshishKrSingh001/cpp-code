#include <iostream>
#include <fstream>
using namespace std;

class File
{
	protected:
	ofstream fout;
	public:
	File()
	{
		fout.open("emp.data");
	}
	~File()
	{
		fout.close();
	}
};
class Employee:private File
{
	private:
	void fileEntry();
	string name;
	double fsal,basic;
	double HRA();
	double TA();
	double DA();
	double medical();
	double insurance();
	public:
	Employee(string name,double bas);
	~Employee();
};
double Employee::HRA()
{
	return basic*15/100;
}
double Employee::TA()
{
	return basic*22/100;
}
double Employee::DA()
{
	return basic*150/100;
}
double Employee::medical()
{
	return 200;
}
double Employee::insurance()
{
	return 1000;
}
inline void Employee::fileEntry()
{
	fout<<"Name: "<<name<<endl<<"Basic Salary: "<<basic<<endl<<"HRA: "<<HRA()<<endl<<"TA: "<<TA()<<endl<<"DA: "<<DA()<<endl<<"Medical: "<<medical()<<endl<<"Insurance: "<<insurance()<<endl<<"Total salary: "<<fsal<<endl;
}
Employee::Employee(string name,double bas)
{
	this->name=name;
	basic=bas;
}
Employee::~Employee()
{
	fsal=basic+HRA()+TA()+DA()-medical()-insurance();
	cout<<"Name: "<<name<<endl<<"your basic salary is: "<<basic<<endl<<"Your final salary is: "<<fsal<<endl;
	fileEntry();
}

int main()
{
	Employee emp("Ashish Kumar Singh",20000);
	return 0;
}