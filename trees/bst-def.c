#include"bst-dec.h"
node getNode(int data)
{
	node new=(node)malloc(sizeof(struct bstnode));
	new->data=data;
	new->left=new->right=NULL;
	return new;
	

}
node insert(node root,int data)
{
	

	node temp=getNode(data);
	if(root==NULL)
		root=temp;
	else if(data<root->data)
					root->left=insert(root->left,data);
	else if(data>=root->data)
					root->right=insert(root->right,data);
	
	
	return root;
}
bool search(node root,int key)
{
	if(root==NULL)
		return false;
	if(key==root->data)
		return true;
	if(key<root->data)
		return search(root->left,key);
	if(key>=root->data)
		return search(root->right,key);
	

}

void inorderTraversal(node root)
{
	//node temp=root;
	if(root==NULL)
	//	printf("TREE IS EMPTY!\n");
	return;
	
	inorderTraversal(root->left);
	printf("%d ",root->data);
	inorderTraversal(root->right);	
}
void preorderTraversal(node root)
{
	//node temp=root;
	if(root==NULL)
	{
	//printf("TREE IS EMPTY!\n");
	return;
	}
		printf("%d ",root->data);

	preorderTraversal(root->left);
	preorderTraversal(root->right);
}
void postorderTraversal(node root)
{
	if(root==NULL)
		return;
		//printf("TREE IS EMPTY!\n");
	postorderTraversal(root->left);  
	postorderTraversal(root->right);
	printf("%d ",root->data);
}
void display(node root)
{

	if(root==NULL) {
		printf("-");
		return ;
	}
	printf("%d",root->data);
	if(root->left!=NULL||root->right!=NULL)
	{
	
	
	
	printf("(");
		display(root->left);
	printf(",");
	
	display(root->right);

printf(")");
	

}

}

