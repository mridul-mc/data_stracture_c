#include<stdio.h>
#include<conio.h>
int facto(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factorial:%d",facto(n));
}
int facto(int n)
{
	if(n>0)
		return n * facto(n-1);
	else
		return 1;
}
