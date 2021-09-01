#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
int main()
{
	int num;
	struct node *root;
	root=(struct node*)malloc(sizeof(struct node));
	if(root==NULL)
	{
		printf("insaficient memory");
	}
	else
	{
		printf("Enter a data:");
		scanf("%d",&num);
		root->data=num;
		root->link=NULL;
		printf("\nNode data are:-");
		printf("%d",root->data);
	}
}
