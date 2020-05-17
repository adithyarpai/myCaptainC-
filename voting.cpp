//Voting eligibility
#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Please enter your age"<<endl;
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You are eligible to vote"<<endl;
	}else
	{
		cout<<"You are eligible only after you are 18. Wait for "<<18-age<<" more years!!"<<endl;
	}
	
	return 0;
}
