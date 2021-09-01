#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[' '],i,n;
	printf("How many number you want to store in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	printf("\nYour enter value is....\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
