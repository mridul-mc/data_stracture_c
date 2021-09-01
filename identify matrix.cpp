#include<stdio.h>
#include<conio.h>
int main ()
{
    int matrix[10][10];
    int i, j, m, n,z=0,o=0;
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
			if(i==j && matrix[i][j]==1)
            {
            	o+=1;
			}
			if(i!=j && matrix[i][j]==0)
			{
				z+=1;
			}
        }
    }
    if(o==m && z==(m*n)-m)
    {
    	printf("Given matrix is I matrix");
	}
	else
	{
		printf("Given matrix is not I matrix");
	}
}
