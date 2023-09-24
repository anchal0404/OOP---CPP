#include <iostream>
using namespace std;
#if 0
class Employee
{
private:
	int a,b,c;
public:
	int d,e;

	void set_data(int a1,int b1,int c1);//We can implemetn function here also;
	void get_data()
	{
		cout<<"The value of a is "<<a<<endl;
		cout<<"The value of a is "<<b<<endl;
		cout<<"The value of a is "<<c<<endl;
		cout<<"The value of a is "<<d<<endl;
		cout<<"The value of a is "<<e<<endl;	
	}
};
//Function definition outside the class
void Employee:: set_data(int a1,int b1,int c1)
{
	a=a1;
	b=b1;
	c=c1;
}


int main(int argc, char const *argv[])
{
	Employee anchal;
	anchal.d=2;
	anchal.e=3;
	anchal.set_data(4,5,6);
	anchal.get_data();
	return 0;
}
#endif

#if 1
class Animal
{
private:
	int tommy,granny;
public:
	int sheery,era,lob;
	Animal()
	{
		cout<<"Constructor Animal\n";
	}
	~Animal()
	{
		cout<<"Destructor Animal\n";
	}

	void get_data()
	{
		cout<<"Enter the ages of the following:"<<endl;
		cin>>tommy;
		cin>>granny;
		cin>>sheery;
		cin>>era;
		cin>>lob;
	}
	void set_data();

	
};
void Animal::set_data()
{
	cout<<"tommy : "<<tommy<<endl;
	cout<<"granny : "<<granny<<endl;
	cout<<"sheery : "<<sheery<<endl;
	cout<<"era: "<<era<<endl;
	cout<<"lob : "<<lob<<endl;

}

int main(int argc, char const *argv[])
{
	Animal a1;
	a1.get_data();
	a1.era=9;
	a1.lob=55;
	a1.set_data();
	return 0;
}

#endif