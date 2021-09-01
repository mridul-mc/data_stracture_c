#include<stdio.h>
#include<conio.h>
int main ()
{
    int matrix[10][10];
    int i, j, m, n;
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
    if(n!=m)
    {
    	printf("The matrix is  a Rectangular Matrix.");
	}
	else
	{
		printf("Given matrix is not a Rectangular Matrix.");
	}
}
