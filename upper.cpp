#include <iostream>
#include <string.h>
using namespace std;
int main(int argc,char*argv[])
{
	if(argc==1)
	{
		cout<<"Bad command!"<<endl;
		return 0 ;
	}
	for(int i=1;i<=argc;i++)
	{
		//strupr(argv[i]);
		cout<<argv[i]<<" ";
		for(int j=0;*(argv[i]+j)!='\0';i++)
			if
	}
	/*for(int i=1;i<=argc;i++)
	{
		cout<<argv[i]<<" ";
	}*/
}