#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
class abc
{   
    char *string;
	public:
		
		abc(char *receive)
		{
			int l;
			l=strlen(receive);
			string=new char [l+1];
			strcpy(string,receive);
		}
		void display()
		{
			cout<<string;
		}
     ~abc()
	 {
	 	delete []string;
	 }
 

};

int main()
{
	abc o("kantipur");
	o.display();
	getch();
	return 0;
	
	
}

