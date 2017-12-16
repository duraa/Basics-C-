#include <iostream>
#include <conio.h>
using namespace std;
class abc
{
	private:int x,y;
	public:
		abc()
		{
			x=0;
			y=0;
			cout<<"default constructor here"<<endl;
		}
		abc(int a,int b)
		{
			x=a;
			y=b;
			cout<<"parameterized constructor"<<endl;
     	}
     	abc(abc &o)
     	{
     		x=o.x;
     		y=o.y;
        }
        void show()
        {
        	cout<<"x is"<<x<<"y is"<<y<<endl;
        }

};

int main()
{
	abc o1;
	abc o2(2,3);
	abc o3(o1);
	o1.show();
	o2.show();
	o3.show();
	getch();
	return 0;

}

