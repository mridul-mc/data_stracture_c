#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ins(int a[],int n);
void booble(int a[],int n);
void sele(int a[],int n);
void dublicate(int a[]);
void show(int a[],int n);
int n;
int main()
{
	int sel,a[' '],i;
	printf("How many number you want to store in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a no:");
		scanf("%d",&a[i]);
	}
	dublicate(a);
	show(a,n);
	printf("\n1.Insertion sort\n2.Booble sort\n3.Selection sort\nEnter your choise:");
	scanf("%d",&sel);
	switch(sel)
	{
		case 1:
			ins(a,n);
			break;
		case 2:
			booble(a,n);
			break;
		case 3:
			sele(a,n);
			break;
		default:
			printf("Wrong input.....");
	}
}
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void dublicate(int a[])
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
}
void ins(int a[],int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nAfter sorted:");
	show(a,n);
}
void booble(int a[],int n)
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
	printf("\nAfter sorted:");
	show(a,n);
}
void sele(int a[],int n)
{
	int i,j,large,pos;
	for(i=n-1;i>0;i--)
	{
		large=a[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(large<a[j])
			{
				large=a[j];
				pos=j;
			}
		}
		a[pos]=a[i];
		a[i]=large;
	}
	printf("\nAfter sorted:");
	show(a,n);
}
