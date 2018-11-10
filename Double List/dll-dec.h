#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *prev,*next;
}*node;
node insertFront(node start,int data);
node insertLast(node start,int data);
node getnode();
node insertAt(node start,int pos,int data);
node deleteAt(node start,int pos);
void disp(node start);
void revDisp(node start);

