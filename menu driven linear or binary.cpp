#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int linear(int a[],int,int);
int bsearch(int a[],int,int);
int sort(int a[],int);
int bnry(int a[],int,int);
int main()		//main start
{
	int op,n,a[' '],i,item,j;
	do
	 {
		printf("Enter array length:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("Enter a no:");
			scanf("%d",&a[i]);
		}
		sort(a,n);
		printf("\nEnter no to search:");
		scanf("%d",&item);
		printf("\nPress 1 for linear search.\n\nPress 2 for binary search.\n\nEnter your choise:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				linear(a,n,item);
				break;
			case 2:
				bnry(a,n,item);
				break;
			default:
				printf("Wrong input....");
		}
		printf("\nDo you want to continue then press 1 or either 0:");
		scanf("%d",&j);
	 }while(j==1);
}

int sort(int a[' '],int n)		//sort the array
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int linear(int a[' '],int n,int item)		//linear search
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(item==a[i])
		{
			printf("found possition:%d",i+1);
			flag=1;
		}
	}
	if(flag==0)
		printf("\nnot found");
}
int bnry(int a[' '],int n,int item)		//binary search step-1
{
	int pos;
	pos=bsearch(a,n,item);          
	if(pos==0)
	printf("\n %d is not in list\n",item);
	else
	printf("\n%d found at position %d\n",item,pos);
}
int bsearch(int a[' '],int n,int item)		//binary search step-2
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(item==a[mid])
			return (mid+1);
			
		else if(item<a[mid])
			high=mid-1;
			
		else
			low=mid+1;
	}
	return (0);
}
