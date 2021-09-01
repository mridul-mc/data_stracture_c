#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int qinsert_front(int arr[],int);
int qinsert_end(int arr[],int);
int qdelet_front(int arr[]);
int qdelet_end(int arr[]);
int display(int arr[]);
int front,rear;
int main()
{
	int item,arr[size];
	front=rear=-1;
	printf("\npress 1 for insert at front");
	printf("\npress 2 for insert at end");
	printf("\nPress 3 for deletion at front");
	printf("\nPress 4 for deletion at end");
	printf("\nPress 5 for display");
	printf("\npress 6 for exit");
	printf("\nEnter your choise:");
	scanf("%d",&choise);
	switch(choise)
	{
		case 1:
			printf("Enter a number:");
			scanf("%d",&item);
			qinsert_front(arr,item);
			break;
		case 2:
			printf("Enter a number:");
			scanf("%d",&item);
			qinsert_end(arr,item);
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		default:
			printf("Wrong input......");
			break;
	}
}
int qinsert_front(int arr[],int item)
{
	if(rear==size-1)
	{
		printf("Queue is overflow..");	
		return(0);
	}
	if(front==-1)
	{
		front=0;
	}
	arr[front]=item;
	front++;
}
int qinsert_end(int arr[],int item)
{
	
}
int qdelet_front(int arr[])
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
		front++;
	}
	return(item);
}
int qdelete_end(int arr[])
{
	
}
