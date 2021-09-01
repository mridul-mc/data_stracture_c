#include<stdio.h>
#include<conio.h>
void show(int a[],int);
void sort(int a[],int);
int bsearch(int a[],int,int);
int main()
{
	int num[20],item,pos,i,n;
	
	printf("How many number you want to store in array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter no:");
		scanf("%d",&num[i]);
	}	
						
	sort(num,n);                 //first sort the no and store array
	printf("\nlist of the no:");
	show(num,n);                   //then show the no
	
	printf("\nEnter of no to search:");
	scanf("%d",&item);
	
	pos=bsearch(num,n,item);          
	if(pos==0)
	printf("\n %d is not in list",item);
	else
	printf("\n%d found at position %d",item,pos);
	return(0);
}
////////////////////*//////////////////////////////////
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%4d",a[i]);
}
//////////////////////*///////////////////////////////
int bsearch(int a[],int n,int item)
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
//////////////////////////*/////////////////////////////
void sort(int a[],int n)
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
