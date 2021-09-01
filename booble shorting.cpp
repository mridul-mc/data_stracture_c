#include<stdio.h>
#include<conio.h>
void show(int a[],int);
void bsort(int a[],int);
void remove(int a[],int);
int main()
{
	int num[20],n,i;
	printf("How many number you want to store in array:");
	scanf("%d",&n);
	//input
	for(i=0;i<n;i++)
	{
		printf("Enter no:");
		scanf("%d",&num[i]);
	}
	printf("\nin bouble sorting:");				//show the list before shorting
	show(num,n);        					
	remove(num,n);
	return(0);
}

/******************************************************************************/
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%9d",a[i]);
}
/*******************************************************************************/

void remove(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
			}
			else
			{
				j++;
			}
		}
	}
	bsort(a,n);
}
void bsort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
printf("\nin assending order:");			//show the list after short
show(a,n);
}

