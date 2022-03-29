#include<iostream>

using namespace std;

int main()
{
	int i=0;
	int multtable;

	cout<<"Enter number:\n ";
	cin>>multtable;

	//cout<<"multiplication table is:\n";

	for(i=1;i<=10;i++)
	{	
		cout<<multtable<<" * "<<i<< "=" <<multtable*i<<endl ;
	}

		

	return 0;
}