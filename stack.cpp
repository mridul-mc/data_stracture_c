#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#define s 6

void push(int st[],int);
int pop(int st[]);
void show(int st[]);
int tos;

int main()
{
tos=-1;
int choise,st[s],item;
while(1)
	{
	 printf("\n\n1.Enter no:");
	 printf("\n2.Remove no:");
	 printf("\n3.Exit");
	 printf("\nEnter your choise:");
	 scanf("%d",&choise);
	 switch(choise)
		{
		  case 1:
			printf("\nEnter a no:");
			scanf("%d",&item);
			push(st,item);
			show(st);
			break;
		  case 2:
			item=pop(st);
			printf("\nRemove item is:%d",item);
			show(st);
			break;
		  case 3:
			exit(0);
		  default:
			printf("Wrong input");
		}
	 }
}


void push(int st[],int item)
	{
	  if(tos==s-1)
		{
		 printf("\nStack overflow");
		 return;
		}
	  tos++;
	  st[tos]=item;
	  return;
	}


int pop(int st[])
	{
	int i;
	  if(tos==-1)
		{
		 printf("\nStack is empty");
		 exit(0);
		}
	  i=st[tos];
	  tos--;
	  return(i);
	}


void show(int st[])
	{
	 int i;
	 if(tos==-1)
	 {
	  printf("\nStack empty");
	 }
	 printf("\nCurrent status is:");
	 for(i=tos;i>=0;i--)
	 {
	  printf("\n%d",st[i]);
	 }
	}
