#include"bst-dec.h"
int main()
{
	int data,key,ch;
	node root=NULL;
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<=n-1;i++)
	{
	scanf("%d",&a[i]);
	root=insert(root,a[i]);	
	}
	while(1)
	{
	display(root);
		printf("\nEnter your choice: \n");	
		printf("\n1:SEARCH\n2:INORDER\n3:PREORDER\n4:POSTORDER\n5:DISPLAY\ndefault:EXIT\n");			
		scanf("%d",&ch);
		switch(ch)
		{
			/*case 1: printf("Enter the element to be inserted: \n");
							scanf("%d",&data);						
							root=insert(root,data);		
							break;*/
			case 1: printf("Enter the element to be searched for:");
							scanf("%d",&key);
							if(search(root,key))
								printf("FOUND!\n");
							else 
								printf("NOT FOUND!\n");
							break;
			case 2:	if(root!=NULL)
						{
							printf("\nINORDER: ");
							inorderTraversal(root);
							printf("\n");
						}
						else 
						printf("Tree is empty! Insert some elements!\n");
							break;
			case 3:
							
							if(root!=NULL)
						{
							printf("\nPREORDER: ");
							preorderTraversal(root);
							printf("\n");
						}
						else 
						printf("Tree is empty! Insert some elements!\n");
						break;
			case 4:	printf("\nPOSTORDER: ");
							postorderTraversal(root);
							printf("\n");
							break;
			case 5: display(root); break;
			default: exit(0);
		}
		
	}



	return 0;
}

