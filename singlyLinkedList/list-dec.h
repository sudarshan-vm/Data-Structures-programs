#include <stdio.h>
#include <stdlib.h>
#ifndef linked_ADT_dec_h
#define linked_ADT_dec_h
typedef struct node
{
	int info;
	struct node *link;
}*NODE;
NODE first;
int item;
NODE getnode();
NODE insertfront(int,NODE);
NODE insertrear(int,NODE);
NODE deletefront(NODE);
NODE deleterear(NODE);
void display(NODE);
NODE sort(NODE);
#endif
