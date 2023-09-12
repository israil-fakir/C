#include <stdio.h>
#define r 3
#define c 3
int i,j;
void matrixInput(int mat[][c]);
void matrixPrint(int mat[][c]);
void matrixAdd(int mat1[][c], int mat2[][c], int res[][c]);
int main()
{
    int mat1[r][c], mat2[r][c], res[r][c];
    printf("Enter elements in 1st matrix for %d by %d: \n", r, c);
    matrixInput(mat1);
    printf("\nEnter elemetns in 2nd matrix for %d by %d: \n", r, c);
    matrixInput(mat2);
    matrixAdd(mat1, mat2, res);
    printf("\nSum of 1st and 2nd matrix: \n");
    matrixPrint(res);
    return 0;
}
void matrixInput(int mat[][c])
{
    int i,j;
    for (i = 0; i < r; i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",(*(mat + i)+j));
        }
    }
}
void matrixPrint(int mat[][c])
{
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
void matrixAdd(int mat1[][c],int mat2[][c],int res[][c])
{

    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            *(*(res+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
        }
    }
}
