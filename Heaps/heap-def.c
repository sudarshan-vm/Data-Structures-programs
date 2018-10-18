#include"heap-dec.h"

int parent(int i)
{
	return i/2;
}

int left(int i)
{
	return 2*i;
}
int right(int i)
{
	return 2*i+1;
}
void maxHeapify(int a[],int i)
{
	int largest,l,r,heapsize=a[0];
	l=left(i);
	r=right(i);
	if(l<=a[0]&&a[l]>a[i])
		largest=l;
	else largest=i;
	if(r<=a[0]&&a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{
	//swap(a[i],a[largest]);
	
	int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;
	
		maxHeapify(a,largest);
	}
	
	
}
	
void buildMaxHeap(int a[])
{
	int i;
	int n=parent(a[0]);
	for( i=n;i>0;i--)
		maxHeapify(a,i);
}

void heapsort(int a[])
{
	if(a[0] == 1)
		return;
		int i;
	int n = (a[0]/2);
	buildMaxHeap(a);
	for( i=n;i>0;i--)
		maxHeapify(a,i);

	int temp = a[1];
	a[1] = a[a[0]];
	a[a[0]] = temp;
	a[0]--;
	heapsort(a);
	
}

int* create()
{
	int *a=(int*)malloc(sizeof(int)*size);
	a[0]=0;
	return a;
}

void insert(int a[],int ele)
{
	a[++a[0]]=ele;
	//int n=parent(a[0]);
	int i;
	for(i=a[0]/2;i>0;i--)
		maxHeapify(a,i);

}

void Delete(int a[])
{
	a[1]=a[a[0]--];
	maxHeapify(a,1);
}
void display(int a[])
{
	int i,n=a[0];
	printf("Queue:	");
	for(i=1;i<=a[0];i++)
		printf("%d ",a[i]);
		printf("\n");
}

void pQueue()
{
	int *a=create();
	int ch,ele;
	while(1)
	{
	//display(a);
		printf("1:Insert	2:Delete	3:Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: if(a[0]==size)
							{
								printf("QEUUE IS FULL\n"); break;
							}
						//	else{
							printf("Enter the element: ");
							scanf("%d",&ele);
							insert(a,ele);
							display(a);
							break;
			case 2: if(a[0]<1){
							printf("Queue is Empty!\n");
							break;}
							else{
							printf("Element Deleted: %d\n",a[1]);
							Delete(a);
							display(a);
							}
							break;
		//case 3: display(a);	break;   
			default: exit(0);
		}
	}
	

}
