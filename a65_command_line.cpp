#include <iostream>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc>0)
	{
		for(int i=1;i<argc;i++)
		{
			cout<<argv[i]<<"\t";
		}
		cout<<endl;
	}
    return 0;
}