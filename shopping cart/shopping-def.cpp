#include "shopping.h"
#include<stdio.h>

int ITEM::icounter;

ITEM::ITEM()
{ 
	++icounter;
}

void ITEM::setter()
{ 
	system("clear");
	cout<<"enter item name: ";
	cin>>name;
	cout<<"enter item code number: ";
	cin>>code_no;
	cout<<"enter the price of the item: ";
	cin>>price;
}

void ITEM::getter()
{ 
	cout<<name<<"   "<<code_no<<"   "<<price<<endl;
}

int ITEM::getflag()
{ 
	return flag;
}

void ITEM::setflag(int i)
{ 
	flag = i;
}

float ITEM ::getprice()
{ 
	return price;
}

int SHOPPING_CART::cart_no;

SHOPPING_CART::SHOPPING_CART()
{ 
	i = 0;
	size = 5;
	no_items = 0;
	total_price = 0.0;
	++cart_no;
	list.resize(size);
}

void SHOPPING_CART::add()
{
	i += 1;
	no_items += 1;
	if(i>=size)
	{ 
		size = size+5;
		list.resize(size);
	}
	list[i].setter();
	list[i].setflag(1);
	total_price += list[i].getprice();	
}

void SHOPPING_CART:: del(int n)
{ 
	if(n-1>i)
	{ 
		cout<<"item does not exist ";
		getchar();
		getchar();
	}
	else
	{
		list[n-1].setflag(0);
		total_price -= list[n-1].getprice();
		no_items -= 1;
	}
	
}

void SHOPPING_CART::disp()
{ 
	system("clear");
	int k = 0;
	if(i == 0)
		cout<<"shopping cart is empty";
	else
	{
		cout<<"************items in shopping cart************"<<endl;
		for(int j=0;j<=i;j++)
		{ 
			if(list[j].getflag())
			{ 
				cout<<++k<<"   ";
				list[j].getter();
			}
		}
		k = 0;
		if(i != no_items)
		{
			cout<<endl<<"total number of items: "<<no_items<<endl;
			cout<<"total price: "<<total_price<<endl;
			cout<<"************items recently viewed************"<<endl;
			for(int j=0;j<=i;j++)
			{ 
				if(!list[j].getflag())
				{	 
					cout<<++k<<"   ";
					list[j].getter();
				}
			}
		}	
	}
	getchar();
	getchar();
}