#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int insert(int,int arr[]);
int deletion(int arr[]);
int display(int arr[]);
int front=-1,rear=-1;
int main()
{
	int arr[size],choise,item,del;
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
			insert(item,arr);
			break;
		case 2:
			del=deletion(arr);
			printf("%d is deleted",del);
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
int insert(int item,int arr[])
{
	if( (front==0 && rear==size-1) || (front==rear+1) )
	{
		printf("Queue overflow");
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	if(rear==size-1)
	{
		rear++;
	}
	else
	{
		rear++;
		arr[rear]=item;
	}
}
int deletion(int arr[])
{
	int item;
	if(front==-1)
	{
		printf("Queue is empty");
	}
	item=arr[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==size-1)
	{
		front=0;
	}
	else
	{
		front++;
	}
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
