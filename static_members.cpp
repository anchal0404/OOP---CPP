#include <iostream>
using namespace std;

class Employee
{
	int id;
	static int count;

	public:
		void setData(void)
		{
			cout<<"Ente the id"<<endl;
			cin>>id;
			count++;
		}
		void getData(void)
		{
			cout<<"This id of this employee is "<<id<<" and this is employee number "<<count<<endl;
		}
};
int Employee :: count;
int main(int argc, char const *argv[])
{
	Employee anshi,tria,kivra;

	anshi.setData();
	anshi.getData();

	tria.setData();
	tria.getData();

	kivra.setData();
	kivra.getData();


	return 0;
}