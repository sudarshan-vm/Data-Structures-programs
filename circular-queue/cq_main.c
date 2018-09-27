#include "cq_dec.h"

int main()
{
	cq q;
	q.r=-1;
	q.f=0;
	
	int ch,n;
	while(1)
	{
	
	display(&q);
	printf("\n1:Enqueue\n2:Dequeue\n3:Display\n4:Exit\n");
	printf("Enter your choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: if(isFull(&q))
					printf("\nSorry!!!Queue is Full\n");
				else
				{
					printf("\nEnter the no. to be enqueued : ");
					scanf("%d",&n);
					enque(&q,n);
				}
				break;
				
		case 2: n=deque(&q);
				if(n!=-999)
					printf("\nThe dequeued element is %d",n);
				break;
				
		case 3: break;
		
		default : return 0;
	}
	}
	return 0;
}

