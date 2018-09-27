#include "list-dec.h"
int main()
{
	NODE first=NULL;
	int ch,item;
	while(1)
	{
		printf("ENTER YOUR CHOICE\n");
		printf("1.INSERTFRONT\n2.INSERTREAR\n3.DELETEFRONT\n4.DELETEREAR\n5.DISPLAY\n6.SORT\n7:EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("ENTER THE ELEMENT:\n");
				scanf("%d",&item);
				first=insertfront(item,first);
				break;
			case 2: printf("ENTER THE ELEMENT:\n");
				scanf("%d",&item);
				first=insertrear(item,first);
				break;
			case 3: first=deletefront(first);
				break;
			case 4: first=deleterear(first);
				break;
			case 5:display(first);
				break;
			case 6: sort(first);
					break;
			case 7:exit(0);
		}
	}
	return 0;
}


