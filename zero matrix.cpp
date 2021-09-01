#include<stdio.h>
#include<conio.h>
int main ()
{
    int matrix[10][10];
    int i, j, m, n;
    int zero=0;
    printf("Enter the order of the matix \n");
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	printf("Enter %d X %d element in matrix: ",i,j);
            scanf("%d",&matrix[i][j]);
            if (matrix[i][j]==0)
            {
                zero++;
            }
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
    if (zero==(m*n))
    {
        printf("The given matrix is Zero Matrix !!! \n");
    }
    else
    {
    	printf("The given matrix is not a zero Matrix \n");
	}
}
