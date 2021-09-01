#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[' '][' '],r,c,i,j;
	printf("Enter row and colom number:\n");
	scanf("%d %d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a number:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nYour enter value is.....\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
