#include"cq.h"

int main()
{	int i,priority,ele;
		queue q[5];
		for(i=0;i<=4;i++)
		{
			create(&q[i]);
		}
		do
		{ 
		system("clear");
		int c;
		for(i=0;i<=4;i++)
		{
			display(&q[i]);
		}
		pf("\n1.enqueue\n2.dequeue\n3.exit\nenter choice : ");
		sf("%d",&c);
		
		switch(c)
		{
			case 1 :pf("enter the element to be inserted : ");
					sf("%d",&ele); 
					pf("enter priority\n");
					sf("%d",&priority);
					enqueue(&q[priority-1],ele);
			break;
			case 2 : 
			for(i=0;i<=4;i++)
			{	
				if(isEmpty(&q[i]))
				continue;
			dequeue(&q[i]);
			break;}
			break;
			case 3 : return 0;
			default : pf("enter correct choice \n");
			
		}
		}while(1);
return 0;
}