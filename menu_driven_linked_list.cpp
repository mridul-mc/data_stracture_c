#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int create_node(int);
int create_node2(int);
int display();
int deletet(int);
int search(int);
void revers(int);
int fir_del();
int lst_del(int);
int concati();
int len;
struct node
{
	int data;
	struct node *link;
}*linked,*linked2;
int main()
{
	int n,n2,choise,loc,con,ser_num;
	do
	{
		printf("Press 1 for insertion\nPress 2 for deletion\nPress 3 for display\nPress 4 for search of a number\nPress 5 for concatinate two linked list\nPress 6 for revers the linked list\nPress 7 for exit\nPress 8 for delete first node\nPress 9 for delete last node\nEnter your choise:");
		scanf("%d",&choise);
		switch(choise)
		{
			case 1:
					printf("How many node you want to create:");
					scanf("%d",&n);
					create_node(n);
				break;
			case 2:
					printf("Enter deleting node location:");
					scanf("%d",&loc);
					deletet(loc);
				break;
			case 3:
				printf("\nNode data are:\n");
				display();
				break;
			case 4:
				printf("Enter searching element:");
				scanf("%d",&ser_num);
				search(ser_num);
				break;
			case 5:
				printf("How many node you want to create for second linked list:");
				scanf("%d",&n2);
				create_node2(n2);
				concati();
				break;
			case 6:
					revers(len);
					printf("After revers:\n");
					display();
				break;
			case 7:
				exit(0);
				break;
			case 8:
					fir_del();
					printf("After delete first node:\n");
					display();
				break;
			case 9:
					lst_del(n);
					printf("After delete last node:\n");
					display();
				break;
			default:
				printf("Wrong input....");
		}
		printf("continue? press 1 or exit press 0:");
		scanf("%d",&con);
	}while(con==1);
}
int create_node(int n)
{
	struct node *tmp,*fnode;
	int num,i;
	linked=(struct node*)malloc(sizeof(struct node));
	if(linked==NULL)
	{
		printf("Memory can't allocated");
	}
	else
	{
		printf("Enter data for 1 node:");
		scanf("%d",&num);
		linked->data=num;
		linked->link=NULL;
		tmp=linked;
	}
	for(i=2;i<=n;i++)
	{
		fnode=(struct node*)malloc(sizeof(struct node));
		if(fnode==NULL)
		{
			printf("Memory can't allocated");
		}
		else
		{
			printf("Enter data for %d node:",i);
			scanf("%d",&num);
			fnode->data=num;
			fnode->link=NULL;
			
			tmp->link=fnode;
			tmp=tmp->link;
		}
	}
}
int display()
{
	struct node *tmp;
	if(linked==NULL)
	{
		printf("Memory cannot allocated");
	}
	else
	{
		tmp=linked;
		while(tmp!=NULL)
		{
			printf("Data:%d\n",tmp->data);
			tmp=tmp->link;
		}
	}
}
int deletet(int loc)
{
	int i=1;
	struct node *p,*q;
	p=linked;
	while(i<loc-1)
	{
		p=p->link;
		i++;
	}
	q=p->link;
	p->link=q->link;
	q->link=NULL;
	free(q);
}
int search(int ser_num)
{
	int ind=0;
	struct node *tmp=linked;
	while(tmp!=NULL)
	{
		ind++;
		if(tmp->data==ser_num)
		{
			printf("Found at position %d\n",ind);
			break;
		}
		else
		{
			tmp=tmp->link;
		}
	}
}
int create_node2(int n)
{
	struct node *tmp,*fnode;
	int num,i;
	linked2=(struct node*)malloc(sizeof(struct node));
	if(linked2==NULL)
	{
		printf("Memory can't allocated");
	}
	else
	{
		printf("Enter data for 1 node:");
		scanf("%d",&num);
		linked2->data=num;
		linked2->link=NULL;
		tmp=linked2;
	}
	for(i=2;i<=n;i++)
	{
		fnode=(struct node*)malloc(sizeof(struct node));
		if(fnode==NULL)
		{
			printf("Memory can't allocated");
		}
		else
		{
			printf("Enter data for %d node:",i);
			scanf("%d",&num);
			fnode->data=num;
			fnode->link=NULL;
			
			tmp->link=fnode;
			tmp=tmp->link;
		}
	}
}
int concati()
{
	struct node *tmp;
	tmp=linked;
	while(tmp->link!=NULL)
	{
		tmp=tmp->link;
	}
	tmp->link=linked2;
}
void revers(int len)
{
	//for count node
	len=0;
	struct node *tmp;
	tmp=linked;
		while(tmp!=NULL)
		{
			len++;
			tmp=tmp->link;
		}

	//for revers list
	struct node *p,*q;
	int i,j,k,temp;
	i=0;
	j=len-1;
	p=q=linked;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=linked;
	}
}int fir_del()
{
	struct node *tmp;
		tmp=linked;
		linked=tmp->link;
		tmp->link=NULL;
		free(tmp);
}
int lst_del(int n)
{
	int i=1;
	struct node *p,*q;
	p=linked;
	while(i<n-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		free(q);
}
