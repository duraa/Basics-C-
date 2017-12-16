#include <iostream>
#include <conio.h>
using namespace std;

class times
{
	int hr,min;

	public:	
	times()
	{
		hr=0;
		min=0;
	}
	times add(times o2)
	{   
	    times result; 
		result.hr=hr+o2.hr;
		result.min=min+o2.min;
		if(result.min>=60)
		{
			result.hr++;
			result.min=result.min%60;
		}
		return result;
	}
	void read()
	{
		cout<<"enter time in hour"<<endl;
		cin>>hr;
		cout<<"enter time in min"<<endl;
		cin>>min;
	}
	void display()
	{
		cout<<"the total hour is"<<hr<<ends<<"the total min is "<<min;
	}
};

int main()
{
	times o1,o2,result;
	o1.read();
	cout<<"for next object"<<endl;
	o2.read();
	result=o1.add(o2);
	result.display();
	
	getch();
	return 0;
	
}
