#include <iostream>
/*
OOPS -> classes and objects
c++ -> C with classes 
classes-> extension of structures(int C)
structures and limitations
	- members are public
	- No methods
classes ->Structures +more
Classes ->can have methods and properties
Classes ->can make few members as private and few are public.
Structure in c++ are typdefed
you can declare objects along with class declaraction 
class Employee
{
	
}anchal, pakhi;
anchal .sal=0;cannot access private.

**Nesting member functions 
*/
#include <cstring>
using namespace std;
class binary
{
	string s;

public:
	

	void read(void);
	void chk_bin(void);
	void ones_compliment(void);
	
};

void binary :: read(void)
{
	cout<<"Enter the binary number"<<endl;
	cin>>s;

}
void binary::chk_bin(void)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (s.at(i)!='0' && s.at(i)!='1')
		{
			cout<<"Incorrect binary format"<<endl;
			exit(0);
		}
	
	}
}
void binary:: ones_compliment(void)
{
	chk_bin();
	for(int i=0;i<s.length();i++)
	{
		if (s.at(i)=='0')
		{
			s.at(i)=='1';
		}
		else if(s.at(i)==1)
		{
			s.at(i)=='0';
		}
	}
	for(int i=0;i<s.length();i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
}
int main(int argc, char const *argv[])
{
	binary b;
	b.read();
	//b.chk_bin();
	b.ones_compliment();


	return 0;
}