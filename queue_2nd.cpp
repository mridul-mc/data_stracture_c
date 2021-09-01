#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int qinsert(int arr[],int);
int delet(int arr[]);
int display(int arr[]);
int front,rear;
int main()
{
	int choise,item,arr[size];
	front=rear=-1;
	while(1)
	{
	printf("\npress 1 for insert\n");
	printf("Press 2 for deletion\n");
	printf("Press 3 for display\n");
	printf("press 4 for exit\n");
	printf("Enter your choise:");
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:
			printf("Enter a data:");
			scanf("%d",&item);
			qinsert(arr,item);
			break;
		case 2:
			item=delet(arr);
			printf("%d is deleted",item);
			break;
		case 3:
			display(arr);
			break;
		case 4:
			exit(0);
		default:
			printf("Wrong input....");
	}
	}
}
int qinsert(int arr[],int item)
{
	if(rear==size-1)
	{
		printf("Queue is overflow..");	
		return(0);
	}
	rear++;
	arr[rear]=item;
	if(front==-1)
	{
		front=0;
	}
}
int delet(int arr[])
{
	int item,i;
	if(front==-1)
	{
		printf("Queue is empty...");
		exit(0);
	}
	item=arr[front];
	if(front==rear)
	{
		front=rear-1;
	}
	else
	{
		for(i=0;i<rear;i++)
		{
			arr[i]=arr[i+1];
		}
		rear--;
	}
	return(item);
}
int display(int arr[])
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty...");
	}
	for(i=front;i<=rear;i++)
	{
		printf("%4d",arr[i]);
	}
}
