#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define size 5

#ifndef cq_dec_h
#define cq_dec_h

typedef struct
{
	int r,f;
	int ele[size];
}cq;

void enque(cq *,int);
int deque(cq *);
void display(cq *);
bool isFull(cq *);
bool isEmpty(cq *);

#endif
