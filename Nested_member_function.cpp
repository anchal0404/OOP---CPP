
/*Nesting of member function*/

#include <iostream>

/*Nesting member functions 
*/
#include <cstring>
using namespace std;
class binary
{
	string s;
	void chk_bin(void);

public:
	

	void read(void);
	void ones_compliment(void);
	void display(void);
	
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
	for(int j=0;j<s.length();j++)
	{
		if (s.at(j)=='0')
		{
			s.at(j)='1';
		}
		else if(s.at(j)=='1')
		{
			s.at(j)='0';
		}
	}
}

void binary :: display(void)
{
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
	b.display();
	b.ones_compliment();
	b.display();

	return 0;
}