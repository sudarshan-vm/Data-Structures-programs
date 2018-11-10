#include"dll-dec.h"

node getnode()
{
	node newnode=(node)malloc(sizeof(struct Node));
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}

node insertFront(node start,int data)
{
	node newnode=getnode();
	newnode->data=data;
	if(start==NULL)
		{
		start=newnode;
		return start;
		}
	
	start->prev=newnode;
	newnode->next=start;
	start=newnode;
	
	
	return start;
}

node insertLast(node start,int data)
{
	node newnode=getnode();
	node temp=start;
	newnode->data=data;
	if(start==NULL)
		start=newnode;
	else
	{
	while(temp->next!=NULL)
		temp=temp->next;
		
	
	newnode->prev=temp;
	temp->next=newnode;
	
	}
	return start;
}


node insertAt(node start,int pos,int data)
{
	node newnode=getnode();
	int count=0,flag=0;
	newnode->data=data;
	node temp=start;
	if(start==NULL)
	{
	if(pos!=0)
		{
			printf("Invalid Position!\n"); 
			return start;
			insertFront(start,data);
		}
	
	}
	
	if(pos==0)
	 insertFront(start,data);
	 else
	 {
	 	while(temp->next!=NULL)
	 	{
	 		count++;
	 		temp=temp->next;
	 		if(pos==count)
	 		{
	 			newnode->next=temp->next;
	 			newnode->prev=temp;
	 			temp->next=newnode;
	 			//..
	 			flag=1;
	 			break;
	 		}
	 	
	 	}
	 	if(!flag)
	 	printf("ENTER A VALID POSITION!\n");
	 }

	return start;
}

node deleteAt(node start,int pos)
{
	node newnode=start,temp=NULL;
	int count=0;
	if(start==NULL)
	{
		printf("LIST IS EMPTY!\n");
		return NULL;
	}
	if(start->next==NULL)
	{
		if(pos!=0)
		{
		printf("INVALID POSITIN!\n");
		return start;
		}
	free(start);
	return NULL;
	}
	if(pos==0)
	{
	
		newnode=start->next;
		newnode->prev=NULL;
		free(start);
		start=newnode;
		return start;
	
	}
	while(newnode->next!=NULL)
	{
	count++;
	if(count==pos)
		{
	temp=newnode->next;
	temp->prev=newnode->prev;
	newnode->prev->next=temp;
	free(newnode);
		}
	newnode=newnode->next;
	}
	
		return start;
}


void disp(node start)
{
	node temp=start;
	if(start==NULL)
		return ;
	while(temp!=NULL)
	{
		if(temp->next!=NULL)
		printf("%d->",temp->data);
		else printf("%d\n",temp->data);
		temp=temp->next;
	}
	return ;
}
/*
void revDisp(node start)
{
	node temp=start;
	if(start==NULL)
		return;
	while(temp->next!=NULL)
		temp=temp->next;
	while(temp!=NULL)
	{
	if(temp->prev!=NULL)
		printf("%d->",temp->data);
		else printf("%d",temp->data);
	  temp=temp->prev;
	}
	return ;


}*/
