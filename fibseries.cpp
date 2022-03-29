
//fiboncci series

#include<iostream>

using namespace std;

int main()
{

	int n=0;

	cout<<"enter number:\n";
	cin>>n;

	int t1=0;
	int t2=1;
	int nextterm=0;

	int i=0;

	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<t1<<",";//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
		}

		if (i==2)
		{
			cout<<t2<<",";
		}

		nextterm=t1+t2;
		t1=t2;
		t2=nextterm;

		cout<<nextterm<<",";
	}
	return 0;
}
