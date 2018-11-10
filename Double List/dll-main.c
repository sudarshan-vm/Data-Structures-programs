#include"dll-dec.h"

int main()
{
 node start=NULL;
 int ch,ele,pos;
 while(1)
 {
 printf("List is: ");
  disp(start);
  //printf("\nreverse: ");
 // revDisp(start);
  printf("\nEnter your choice: \n");
  printf("1:InsertFront	2:InsertLast	3:InsertByPosition 4:Delete	5:Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1: printf("Enter the element: \n");
  				scanf("%d",&ele);
  				start=insertFront(start,ele);
  				break;
  case 2: printf("Enter the element: \n");
  				scanf("%d",&ele);
  				start=insertLast(start,ele);
  				break;
  case 3: printf("Enter the position and element: \n");
  				scanf("%d%d",&pos,&ele);
  				if(pos!=0)
  				start=insertAt(start,pos,ele);
  				else start=insertFront(start,ele);
  				break;
  case 4: if(start==NULL) printf("LIST IS EMPTY!\n");
  				else{
  				printf("Enter the position: \n");
  				scanf("%d",&pos);
  				start=deleteAt(start,pos);
  				}
  				break;
  case 5: exit(0);
  
  }
  
 }
	
	return 0;
}
