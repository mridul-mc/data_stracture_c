#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 6
int qinsert(int,int arr[]);
int delet(int arr[]);
void display(int arr[]);
int front,rear;
int main()
{
	int arr[size],choise,item;
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
				qinsert(item,arr);
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
int qinsert(int item,int arr[])
{
	if((front==0 && rear==size-1) || (front==rear+1))
	{
		printf("\nQueue overflow");
		return(0);
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		if(rear==size-1)
		{
			rear=0;
		}
		else
		{
			rear++;
		}	
	}
	arr[rear]=item;
}
int delet(int arr[])
{
	int item;
	if(front==-1)
	{
		printf("queue empty\n");
		exit(0);
	}
	item=arr[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		if(front==size-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
	return(item);
}
void display(int arr[])
{
	int i;
	if(front==-1)
	{
		printf("Queue empty");
		
	}
	for(i=front;i<=rear;i++)
	{
		printf("%4d",arr[i]);
	}
}
