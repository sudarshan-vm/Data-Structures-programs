#include"cq.h"

void create(queue *q)
{		
		q->f=-1;
		q->r=-1;
}

bool isEmpty(queue *q)
{
	if(q->f==-1)
		return true;
	else 
		return false;
}

bool isFull(queue *q)
{
		if((q->f==(q->r+1)%size))
			return true;
		else
			return false;
}


void enqueue(queue *q,int data)
{
		if(isFull(q))
		{
			pf("queue full\n");
			return ;
		}
		if(q->f==-1)
			q->f=0;	
	
		q->r=(q->r+1)%size;
		q->a[q->r]=data;
		

}

int dequeue(queue *q)
{	int x,i;
	
	if(isEmpty(q))
	{
		pf("queue empty\n");
		return 0;
	}
	
	else
	{
		x=q->a[q->f];
		if(q->f==q->r)
		{
			q->f=-1;
			q->r=-1;
		}
		else
		q->f=(q->f+1)%size;
		
	}
	
	
	return x;
}

void display(queue *q)
{	int i;
	if(isEmpty(q))
	{
		pf("queue empty\n");
		return;
	}
	
	 if(isFull(q))
		{
			pf("queue full\n");
			
		}
	
	
	
		for(i=q->f;i<=q->r;i++)
		{	
			
			pf("%d ",q->a[i]);
			if(i==size)
			{
				i%=size;
			}
			
		}	
		
		//pf("%d ",q->a[i]);		
	pf("\n");
}