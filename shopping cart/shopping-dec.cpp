#ifndef shopping_h
#define shopping_h
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class ITEM
{ 
	char name[30];
	int code_no,flag;
	static int icounter;
	float price;
	public:
	void getter();
	void setter();
	int getflag();
	void setflag(int);
	float getprice();
	ITEM();
};

class SHOPPING_CART
{ 
	int no_items,i,size;
	float total_price;
	static int cart_no;
	vector <ITEM> list;
	public:
	void add();
	void del(int);
	void disp();
	SHOPPING_CART();
};

#endif