#include "shopping.h"

int main()
{ 
	SHOPPING_CART s;
	int ch,n;
	while(1)
	{ 
		system("clear");
		cout<<"1 to add items\n2 to delete an item\n3 to display the cart\n4 to exit the program\nenter your choice: ";
		cin>>ch;
		switch(ch)
		{ 
			case 1:
			s.add();
			break;
			
			case 2:
			cout<<"enter the item number to be deleted: ";
			cin>>n;
			s.del(n);
			break;
			
			case 3:
			s.disp();
			break;
			
			case 4:
			return 0;
			
			default:
			cout<<"invalid input";
			getchar();
			getchar();
		}
	}
	return 0;
}