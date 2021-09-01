#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#define s 6
int tos;
void push(int st[],int);
int pop(int st[]);
void show(int st[]);
int main()
{
	int st[s],it,c;
	tos=-1;
	while(1)
	{
		printf("\n\n1.Enter item:");
		printf("\n\n2.Remove item:");
		printf("\n\n3.exit");
		printf("\n\nEnter your choise:");
		scanf("%d",&c);
			switch(c)
			{
				case 1:
					printf("\n\nEnter a no:");
					scanf("%d",&it);
					push(st,it);
					show(st);
					break;
				case 2:
					it=pop(st);
					printf("\n\nRemoved item is:%d",it);
					show(st);
					break;
				case 3:
					exit(0);
					break;
				default:
					printf("\n\nWrong input..");
					break;
			}
	}
}
void push(int st[],int it)
{
	if(tos==s-1)
	{
		printf("\n\nStack overflow..");
		return;
	}
	tos++;
	st[tos]=it;
}

int pop(int st[])
{
	int y;
	if(tos==-1)
	{
		printf("\n\nStack is empty..");
	}
	y=st[tos];
	tos--;
	return(y);
}

void show(int st[])
{
	int i;
	if(tos==-1)
	{
		printf("\nStack is empty..");
	}
	printf("\n\nCurrent status is:");
	for(i=tos;i>=0;i--)
	{
		printf("\n%d",st[i]);
	}
}
