#include<stdib.h>
#include<stdio.h>
#include<stdbool.h>

#define size 5
#ifndef cq_h
#define cq_h
#define pf printf
#define sf scanf
typedef struct
{
	int a[size];
	int f,r;

}queue;

void create(queue*);
void enqueue(queue*,int);
int dequeue(queue*);
void display(queue*);
bool isEmpty(queue*);
bool isFull(queue*);