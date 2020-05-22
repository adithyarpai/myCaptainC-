//Display and convert time to seconds

#include<iostream>
#include<iomanip>
using namespace std;

class clock
{
 	private:
	 int sec;
	 int hh,mm,ss;
	
	public:
	 gettime();
	 convert();
	 displaydata(); 	
};

clock :: gettime()
{
	cout<<"Enter time: \n";
	cout<<"Hours?\n";
	cin>>hh;
    cout<<"Minutes?\n";
	cin>>mm;
    cout<<"Seconds?\n"; 
	cin>>ss;
}

clock :: convert()
{
	sec = (hh*60*60) + (mm*60) + ss;
}

clock :: displaydata()
{
	cout<<"The time is = "<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
	cout<<"Time in total seconds is : "<<sec;
}

int main()
{
	clock c1;
	c1.gettime();
	c1.convert();
	c1.displaydata();
	
	return 0;
}
