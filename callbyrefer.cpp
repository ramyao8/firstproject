#include<iostream>
using namespace std;
int add(int &b)
{
	cout<<"The values before increment in sub function is "<<b<<endl;
	b=b+50;
	cout<<"The values after increment in subfunction is "<<b<<endl;
	return b;
}
int main()
{
	int a,b;
	cout<<"enter a";
	cin>>a;
	cout<<"the value of a before increment in main function is "<<a<<endl;
	add(a);
	cout<<"the value of a after increment in main function is "<<a<<endl;
}

