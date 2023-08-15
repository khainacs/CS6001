#include<stdio.h>
int row, column;
int arr[10][10];
void input(int arr[10][10], int *row, int *column)
{
    printf("enter row: ");
    scanf("%d", row);
    printf("enter column: ");
    scanf("%d", column);
    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *column; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void output(int arr[10][10], int row, int column)
{
    printf("array was just entered: \n");
    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%4d", arr[i][j]);
        }
         printf("\n");
    }
     printf("\n");
}
int sum_average(int arr[10][10], int row, int column)
{
    
    int average = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
             average += arr[i][j];
        }
    }
    average = average / (row*column);
    return average;
}
int sum_average_unsigned( int arr[10][10], int row, int column)
{
    
    int average = 0;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] > 0)
            {
                average += arr[i][j];
                count += 1;
            }
        }
    }
    average = average / count;
    return averagae;
}
void out_row_position(int arr[10][10], int column)
{
    int position;
    printf("enter row that you want to print out\n");
    scanf("%d", &position);
    for (int i = 0; i < column; i++)
    {
        printf("%d", arr[position - 1][i]);
    }
    printf("\n");
}
int total_column_position(int arr[10][10], int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[row][position - 1];
    }
    return sum;
}
int biggest_value(int arr[10][10], int row, int column)
{
    int biggest = 0;
    for (int i = 0;  i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (biggest < arr[i][j])
            {
                biggest = arr[i][j];
            }
        }
    }
    return biggest;
}
int main()
{
    input(arr, &row, &column);
    output(arr, row, column);
    printf("The sum average of array is: %d\n", sum_average(arr, row, column));
    printf("The sum average of array that element is unsigned is: %d\n", sum_average(arr, row, column));
    out_row_position(arr, column);
    int position;
    printf("enter column that you wnat print out the sum: ")
    scanf("%d", &position);
    
}