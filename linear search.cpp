#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,m,i,a[' '],flag=0;
	printf("How many no you want to store in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a no:");
		scanf("%d",&a[i]);
	}
	printf("Enter your search no:");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			printf("found possition:%d",i+1);
			exit(0);
		}
	}
	if(flag==1)
		printf("\nfound");
	else
		printf("not found");
	return(0);
}
