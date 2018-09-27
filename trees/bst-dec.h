#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct bstnode
{
	int data;
	struct bstnode* left,*right;

}*node;
node getNode(int data);
node insert(node root,int data);
bool search(node root,int key);
void inorderTraversal(node root);
void preorderTraversal(node root);
void postorderTraversal(node root);
void display(node root);
