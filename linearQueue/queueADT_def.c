#include "queueADT_dec.h"

void enque(queue *q,int a)
{
	if(isFull(q))
	{
		printf("\n The queue is full");
		return;
	}
	else
	{
		q->r++;
		q->ele[q->r]=a;
	}
	return;
}

int deque (queue *q)
{
	if(isEmpty(q))
	{
		printf("\n The queue is empty");
		return -999;
	}
	else
		return q->ele[q->f++];
}


void display(queue *q)
{
	int i;
	printf("\nQueue : ");
	for(i=q->f;i<=q->r;i++)
	{
		printf("%d ",q->ele[i]);
	}
	printf("\n");
	return;
}


bool isFull(queue *q)
{
int i;
	if(q->r==size-1)
	{
		if(q->f==0)
			return true;
			
		else
		{
			for(i=0;q->f+i<=q->r;i++)
				q->ele[i]=q->ele[q->f+i];
				
			q->f=0;
			q->r=i-1;
		}
	}
	return false;
}

bool isEmpty(queue *q)
{
	if(q->r+1==q->f)
		return true;
		
	return false;

}
