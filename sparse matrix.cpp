#include<stdio.h>
#include<conio.h>
int main()
{
    int matrix[10][10];
    int i,j,m,n;
    int sparse_counter=0;
    printf("Enter the row and coloum:\n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of the matix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==0)
            {
                sparse_counter++;
            }
        }
    }
    printf("\nOutput is........\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d  ",matrix[i][j]);
        }
        printf("\n\n");
    }
    if(sparse_counter>((m*n)/2))
    {
        printf("The given matrix is Sparse Matrix !!! \n");
    }
    else
        printf("The given matrix is not a Sparse Matrix \n");
    printf("There are %d number of Zeros.", sparse_counter);
}
