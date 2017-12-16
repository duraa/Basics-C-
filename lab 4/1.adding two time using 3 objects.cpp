#include <iostream>
#include <conio.h>
using namespace std;
/*Create a class times with int data member hr and min and read() and display() members function
WAP to add two objects of the class by passing arguments in the fun add()*/
class times
{
	int hr,min;

	public:
	times()
	{
		hr=0;
		min=0;
	}
	void add(times o1,times o2)
	{
		hr=o1.hr+o2.hr;
		min=o1.min+o2.min;
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
		cout<<"the total hour is:"<<hr<<ends<<"the total min is:"<<min;
	}
};

int main()
{
	times o1,o2,result;
	o1.read();
	cout<<"for next object"<<endl;
	o2.read();
	result.add(o1,o2);
	result.display();
	getch();
	return 0;

}
