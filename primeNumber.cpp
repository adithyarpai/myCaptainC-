//Sum of two prime numbers
#include<iostream>
using namespace std;

bool prime(int n)                       //function to check if prime number or not
{
	int i;
	bool ifprime = true;
	for(i=2; i<=n/2;i++)
	{
		if(n%i==0)
		{
			ifprime = false;            //confirms if prime or not
			break;
		}
	}
	return ifprime;
}

int main()
{
	int i,n;
	bool test = false;
	
	cout<<"Enter a positive number\n";
	cin>>n;
	
	for (i=2;i<=n/2;i++)
	{
		if(prime(i))
		{
			if(prime(n-i))
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				test = true;
			}
		}
	}
	if(!test)
	{
		cout<<"Can not be expressed as two prime numbers\n";
	}
	return 0;
}
