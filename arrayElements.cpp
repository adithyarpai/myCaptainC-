//Accessing elements of an arreay using pointers
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"Enter elements of array"<<endl;
	for(int n=0;n<5;n++)
	{
		cin>>a[n];
	}
	cout<<"You entered :"<<endl;
	for(int n=0;n<5;n++)
	{
		cout<<a[n]<<endl;
	}
	
	return 0;
}
