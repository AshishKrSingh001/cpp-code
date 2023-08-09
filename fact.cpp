#include <iostream>
using namespace std;
class Factorial
{
	int n;
	public:
	Factorial()
	{
		//cout<<"9608013300"<<endl;
		cout<<"Enter a number: "<<endl;
		cin>>n;
	}
	friend double fact(Factorial f);
};
double fact(Factorial f)
{

	double fac=1;
	int i;
	for(i=1;i<=f.n;i++)
	{
		fac=fac*i;
	}
	return fac;
}
int main()
{
	Factorial f;
	cout<<"Factorial: "<<fact(f)<<endl;
	return 0;
}