#include <iostream>
using namespace std;

class Employee
{
	int id;
	static int count; //Static variable associated with class.

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

		static void getCount(void)
		{
			cout<<"The value of count is "<<count<<endl;
		}
};
int Employee :: count=10;
int main(int argc, char const *argv[])
{
	Employee anshi,tria,kivra;

	anshi.setData();
	anshi.getData();
	Employee:: getCount();
	tria.setData();
	tria.getData();
	Employee::getCount;
	kivra.setData();
	kivra.getData();
	Employee::getCount();//Access static function associated with class they only acccess static member of the class.


	return 0;
}