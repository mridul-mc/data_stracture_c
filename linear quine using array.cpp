#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 6
int front,rear;
void qinsert(int queue[],int);
int delet(int queue[]);
void show(int queue[]);
int main()
{
	int queue[size],c,item;
	front=rear=-1;
	while(1)
	{
		printf("\n\n1.Insert item:");
		printf("\n2.Remove item");
		printf("\n0.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nEnter number to insert:");
				scanf("%d",&item);
				qinsert(queue,item);
				printf("\nCurrent status:");
				show(queue);
				break;
			case 2:
				item=delet(queue);
				printf("\nItem removed:%d",item);
				printf("\nCurrent status:");
				show(queue);
				break;
			case 0:
				exit(0);
				break;
			default:
				printf("\nWrong choice");
		}
	}
}
void qinsert(int queue[],int item)
{
	if(rear==size-1)
	{
		printf("\nQueue overflow");
		return;
	}
	rear++;
	queue[rear]=item;
	if(front==-1)
	{
		front=0;
	}
	return;
}
int delet(int queue[])
{
	int item;
	if(front==-1)
	{
		printf("\nQueue is empty");
		exit(0);
	}
	item=queue[front];
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
void show(int queue[])
{
	int i;
	if(front==-1)
	{
		printf("\nEmpty queue");
		return;
	}
	for(i=front;i<=rear;i++)
	{
		printf("%2d",queue[i]);
	}
}
