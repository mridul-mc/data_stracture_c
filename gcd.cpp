#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,tmp1,tmp2,rem,gcd;
	printf("Enter 1st number:");
	scanf("%d",&num1);
	printf("Enter 2nd number:");
	scanf("%d",&num2);
	if(num1<num2)
	{
		tmp1=num1;
		tmp2=num2;
	}
	else
	{
		tmp1=num2;
		tmp2=num1;
	}
	rem=tmp2%tmp1;
	gcd=tmp1;
	while(rem!=0)
	{
		tmp2=tmp1;
		tmp1=rem;
		rem=tmp2%tmp1;
		gcd=tmp1;
	}
	printf("GCD is:%d\n",gcd);
	printf("LCM is:%d",num1*num2/gcd);
}
