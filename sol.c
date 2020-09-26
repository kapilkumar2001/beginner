#include<stdio.h>
int main()
{
int mat[3][3];
int i,j;
for( i = 0; i<3;i++)
{
            for( j = 0; j<3;j++)
            {
                        printf("Enter %d,%d term of the matrix\n ",i+1,j+1);
                        scanf("%d",&mat[i][j]);

            }
} printf("Transpose  of  the given matrix is \n");
 for(int a = 0; a<j;a++)
 {
             for(int b = 0 ; b<i;b++)
             {
                         printf("%d ",mat[b][a]);
             }
             printf("\n");
 }
}
