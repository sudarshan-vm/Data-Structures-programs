#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define size 5

#ifndef queueADT_dec_h
#define queueADT_dec_h

typedef struct
{
	int r,f;
	int ele[size];
}queue;

void enque(queue *,int);
int deque(queue *);
void display(queue *);
bool isFull(queue *);
bool isEmpty(queue *);

#endif
