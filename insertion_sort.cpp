#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,n,a[' '];
	printf("How many number you want to store in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a no:");
		scanf("%d",&a[i]);
	}
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
	printf("\nAfter Sorted:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
