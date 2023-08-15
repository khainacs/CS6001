#include<stdio.h>
int main()
{
    int i;
    int j;
    int matrix[10][10];
    int row, col;
    int sum = 0;
    printf("enter row of matrix\n ");
    scanf("%d", &row);
    printf("enter column of matrix\n ");
    scanf("%d", &col);
    for (i = 0; i < row; i++)
    {
       for (j = 0; j < col; j++) {
         printf("enter element matrix[%d][%d] : ", i, j);
         scanf("%d", &matrix[i][j]);
      }
    }
    for (i = 0; i < row; i++) 
    {
       for (j = 0; j < col; j++) 
       {
         sum = sum + matrix[i][j];
       }
    }
    printf("%d\n", sum);

    int number;
    scanf("%d", &number);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (matrix[i][j] == number)
            {
                printf("%d %d\n", i, j);
                break;
            }
        }
    }
    return (0);

}