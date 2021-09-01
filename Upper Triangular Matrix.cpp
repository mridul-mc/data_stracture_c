#include<stdio.h>
#include<conio.h>
int main ()
{
    int matrix[10][10];
    int i, j, m, n,flag;
    printf("Enter the Row and coloum of the matix \n");
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	printf("Enter %d X %d element in matrix: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
			if(i>j)
			{
				if(matrix[i][j]==0)
				{
					flag=0;
				}
				else
				{
					flag=1;
				}
			}
        }
    }
    if(flag!=0)
    {
    	printf("Given matrix is not Upper Triangular Matrix");
    	
	}
	else
	{
		printf("Given matrix is Upper Triangular Matrix");
	}
}
