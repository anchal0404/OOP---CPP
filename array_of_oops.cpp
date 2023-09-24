#include <iostream>
using namespace std;
class Shop
{
	int itemId[100];
	int itemPrice[100];
	int counter;
public:
	void intiCounter(void) {
		counter=0;
	}
	void setPrice(void);
	void displayPrice(void);
};

void Shop :: setPrice(void)
{
	cout<<"Enter Id of your Item no "<<counter+1<<":"<<endl;
	cin>>itemId[counter];
	cout<<"Enter Price of your item"<<endl;
	cin>>itemPrice[counter];
	counter++;
}

void Shop:: displayPrice(void)
{
	for (int i = 0; i < counter; i++)
	{
		cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
	}
}
int main(int argc, char const *argv[])
{
	int no_of_items;
	Shop Bhawarilaal;
	cout<<"Enter the no of items: ";
	cin>>no_of_items;
	Bhawarilaal.intiCounter();
	for (int i = 0; i < no_of_items; ++i)
	{
		Bhawarilaal.setPrice();
	}
	Bhawarilaal.displayPrice();

	
	return 0;
}