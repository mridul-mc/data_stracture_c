#include<stdio.h>
#include<conio.h>
int main ()
{
    int matrix[10][10];
    int i,j,m,n;
    printf("Enter the order of the matix \n");
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
    if (n==m)
    {
        printf("The given matrix is a square matrix !!! \n");
    }
    else
    {
    	printf("The given matrix is not a square matrix\n");
	}
}
