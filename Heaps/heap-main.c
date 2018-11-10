#include"heap-dec.h"
int main()
{
	int ch,i,j,n;
//	while(1){
	printf("1:HeapSort	2:PriorityQueue 3:Exit\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: { printf("Enter the Number of elements:	\n");
						scanf("%d",&n);
						
						int h[n];
						h[0]=n;
						printf("Enter the elements:	\n");
						for(i=1;i<=h[0];i++)
							scanf("%d",&h[i]);
						heapsort(h);
						for(i=1;i<=n;i++)
							printf("%d ",h[i]);	
						break;
						}
		case 2: {pQueue();
						break;
						}
	}
	
	return 0;

}

















