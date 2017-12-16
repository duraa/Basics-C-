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
	void add(times o2)
	{
		hr=hr+o2.hr;
		min=min+o2.min;
		if(min>=60)
		{
			hr++;
			min=min%60;
		}
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
	times o1,o2;
	o1.read();
	cout<<"for next object"<<endl;
	o2.read();
	o1.add(o2);
	o1.display();
	getch();
	return 0;
	
}
