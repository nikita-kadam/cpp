//Area of circle

#include<iostream>

using namespace std;

int main()
{
	int radius=0;
	int pi=3.14;
	int area=0;

	cout<<"Enter radius of circle:\n ";
	cin>>radius;

	area=pi*radius*radius;

	cout<<"Area of circle"<<area<<"\n";

	return 0;
}