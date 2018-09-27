#include "cq_dec.h"

void enque(cq *q,int a)
{
	if(isFull(q))
		printf("\nCircular Queue is Full");
	else
	{
		q->r=(q->r+1)%size;
		q->ele[q->r]=a;
	}
}

int deque(cq *q)
{
	int k;
	if (isEmpty(q))
		return -999;
		
	k=q->ele[q->f];	
	q->f=(q->f+1)%size;
	return k;
	
}


void display(cq *q)
{
	if (isEmpty(q))
	{
		printf("\nCircular queue is empty");
		return ;
	}
	
	printf("\n Circular queue : ");
	for (int i=q->f;i<=q->r;i++)
			printf("%d ",q->ele[i]);
	
	return;
}

bool isFull(cq *q)
{
	if((q->r+2)%size==q->f)
		return true;
	return false;

}

bool isEmpty(cq *q)
{
	if((q->r+1)%size==q->f)
		return true;
	return false;

}
