#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int insert(int,int);
int gethigh_pri();
int del_high();
int display();

struct priqueue
{
	int data;
	int prio;
}que[size];
int rear=-1;

int main()
{
	int ch,el,pr,con;
	do{

	printf("\n1.Insert item\n2.Delete high priority\n3.Get high priority\n4.Display\n5.Exit");
	printf("\nEnter your choise:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			if(rear==size-1)
			{
				printf("Queue is full.");
			}
			else
			{
				printf("Enter a data:");
				scanf("%d",&el);
				printf("Enter priority:");
				scanf("%d",&pr);
				insert(el,pr);
			}
			break;
		case 2:
			if(rear==-1)
			{
				printf("Queue is empty..");
			}
			else
			{
				pr=del_high();
				printf("%d is deleted",pr);
			}
			break;
		case 3:
			if(rear==-1)
			{
				printf("Queue is empty");
			}
			else
			{
				el=gethigh_pri();
				printf("Highest priority is %d",el);
			}
			break;
		case 4:
			if(rear==-1)
			{
				printf("Queue is empty");
			}
			else
			{
				display();
			}
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Wrong input...");
	}
	printf("\nDo you want to continue? press 1 or exit press 0:");
	scanf("%d",&con);
	}while(con==1);
}
int insert(int el,int pr)
{
	rear++;
	que[rear].data=el;
	que[rear].prio=pr;
}
int gethigh_pri()
{
	int i,p=-1;
	if(rear!=-1)
	{
		for(i=0;i<=rear;i++)
		{
			if(que[i].prio>p)
			{
				p=que[i].prio;
			}
		}
	}
	return p;
}
int del_high()
{
	int i,j,p,ele;
	p=gethigh_pri();
	for(i=0;i<=rear;i++)
	{
		if(que[i].prio==p)
		{
			ele=que[i].data;
			break;
		}
	}
	if(i<rear)
	{
		for(j=i;j<rear;j++)
		{
			que[j].data=que[j+1].data;
			que[j].prio=que[j+1].prio;
		}
	}
	rear=rear-1;
	return ele;
}
int display()
{
	int i;
	printf("\nPriority queue are-");
	for(i=0;i<=rear;i++)
	{
		printf("\nEle: %d priority:%d",que[i].data,que[i].prio);
	}
}
