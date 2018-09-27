#include "list-dec.h"
NODE getnode()
{
	NODE x;
	x=(NODE)malloc(sizeof(struct node));
	if(x==NULL)
	{
		printf("OUT OF MEMORY\n");
		exit(0);
	}
	return x;
}
NODE insertfront(int item,NODE first)
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	temp->info=item;
	temp->link=first;
	return temp;
}
NODE insertrear(int item,NODE first)
{
	NODE cur,temp;
	temp=getnode();
	temp->info=item;
	temp->link=NULL;
	if(first==NULL)
		return temp;
	cur=first;
	while(cur->link!=NULL)
	{
		cur=cur->link;
	}
	cur->link=temp;
	return first;
}
NODE deletefront(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("LIST IS EMPTY\n");
		return NULL;
	}
	temp=first;
	temp=temp->link;
	printf("THE ELEMENT DELETED:%d\n",first->info);
	free(first);
	return temp;
}
NODE deleterear(NODE first)
{
	NODE temp,cur,prev;
	if(first==NULL)
	{	
		printf("LIST IS EMPTY\n");
		return first;
	}
	if(first->link==NULL)
	{
		printf("ELEMENT DELETED:%d\n",first->info);
		free(first);
		return NULL;
	}
	prev=NULL;
	cur=first;
	while(cur->link!=NULL)
	{
		prev=cur;
		cur=cur->link;
	}
	printf("ELEMENT DELETED:%d\n",cur->info);
	prev->link=NULL;
	free(cur);
	return first;
}
void display(NODE first)
{
	NODE temp;
	if(first==NULL)
	{
		printf("LIST IS EMPTY");
		return;
	}
	temp=first;
	printf("THE CONTENTS OF THE LISTS:");
	while(temp!=NULL)
	{
		printf("%d -> ",temp->info);
		temp=temp->link;
	}
	printf("\n");
}
NODE sort(NODE first)
{

	NODE temp=first;
	NODE temp2;
	if(first==NULL)
	{
		printf("LIST IS EMPTY\n");
		return NULL;
	}
	int t=first->info;
	while(temp!=NULL)
	{
	 
	 temp2=temp;
	 while(temp2!=NULL)
	 {
		if(temp->info>temp2->info)
		{
			t=temp->info;
			temp->info=temp2->info;
			temp2->info=t;
		
		
		}
		
		temp2=temp2->link;
		
	}
	temp=temp->link;
	}
	return first;
}
