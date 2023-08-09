#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc>0)
	{
		double add=0;
		for(int i=1;i<argc;i++)
		{
			cout<<argv[i]<<"\t";
			add=add+stod(argv[i]);
		}
		cout<<endl<<"Addition: "<<add<<endl;
	}
    return 0;
}