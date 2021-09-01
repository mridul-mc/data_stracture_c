#include<stdio.h>
#include<conio.h>
void show(int a[],int);
void selsort(int a[],int);
int main()
{
	int a[' '],n,i;
	printf("How many number you want to store in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a no:");
		scanf("%d",&a[i]);
	}
	printf("\nBefore sort:\n");
	show(a,n);
	selsort(a,n);
	printf("\nAfter sort:\n");
	show(a,n);
}
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%2d",a[i]);
	}
}
void selsort(int a[],int n)
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
}
