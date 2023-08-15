#include<stdio.h>

void input_element(int *number, int *arr)
{
     for(int i = 0; i < *number; i++ )
     {
        scanf("%d", &arr[i]);
     }
}
void out_element(int number, int *arr)
{
    for (int i = 0; i < number; i++)
    {
        printf("%d  ",  arr[i]);
    }
    printf("\n");
}
/*
void first_unsigned(int number, int *arr)
{
    int var = -1;
    int i = 0;
    for (int i = 0; i < number; i++)
    {
        if (arr[i] > var)
        {
            
            break;
        }
    }
    printf("index which first value unsigned locate, is %d and value in index is %d\n", i, arr[i] );
}

void last_unsigned(int number, int *arr)
{
    int var = -1;
    int  i = number - 1;
    for (int i ; i >= 0; i--)
    {
        if (var < arr[i])
        {
            break;
        }
    }
    printf("index which last value unsigned locate, is %d and value in index is %d\n", i, arr[i] );
}

int biggest_element(int number, int *arr)
{
    int var = 0;
    for (int i = 0; i < number; i++)
    {
        if (var < arr[i])
        {
            var = arr[i];
        }
    }
    return var;
}

int couting_biggest(int number, int *arr)
{
    int count = 0;
    int flag = biggest_element(number, arr);
    for (int i = 0; i < number; i++)
    {
        if (arr[i] == flag)
        {
            count +=1;
        }
    }
    return count;
}

void  out_index(int number, int *arr)
{
    
    int flag = biggest_element(number, arr);
    for (int i = 0; i < number; i++)
    {
        if (arr[i] == flag)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
}

void push_new(int number, int *arr)
{
    int element;
    printf("enter number which you want to see in first value of array: ");
    scanf("%d", &element);
    for (int i = number; i >= 0; i--)
    {
        arr[i+1] = arr[i];
        
    }
    arr[0] = element;
}

void push_new_index(int number, int *arr)
{
    int element;
    int position;
    printf("enter number which you want to see in value of array: ");
    scanf("%d", &element);
    printf("enter index that you want to see number was jus entered: ");
    scanf("%d", &position);
    for (int i = number; i >= position; i--)
    {
        arr[i] = arr[i - 1];
        
    }
    arr[position - 1] = element;
    
}

void delete_first(int number, int *arr)
{
    for (int i = 0; i < number; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

void delete_k(int *number, int *arr)
{
    int index;
    printf("enter index that you want to delete ");
    scanf("%d", &index);
    for (int i = index - 1; i < *number - 1; i++)
    {
        arr[i] = arr[i+ 1];
       
    }
    *number -= 1;
   
    
}
void check_odd(int number, int arr[])
{
    bool flag = true;
    for (int i = 0; i < number; i++)
    {
         if (arr[i] % 2 != 0)
         {
             flag = false;
         }
    }
    if (flag == true)
    {
        printf("array have not odd number \n");
    }
    else
    {
        printf("array have odd number \n");
    }
}
*/
int main()
{
    int number;
    int arr[105];
    printf("enter number of elements in array : ");
    scanf("%d", &number);
    printf("enter array of elements is: ");
    input_element(&number, arr);
    printf("element in arrray was entered: ");
    out_element(number,  arr);
    ///printf("the number which is unsigned in array is: ");
    first_unsigned(number, arr);
    last_unsigned(number, arr);
    printf("The biggest value in array is ");
    printf("%d \n", biggest_element(number, arr));
    printf("the number of biggest number in array is ");
    printf("%d \n",couting_biggest(number, arr));
    printf("The index of the biggest element in array is ");
    out_index(number, arr);
    push_new(number, arr);
    out_element(number, arr);
    push_new_index(number, arr);
    out_element(number, arr);
    delete_first(number, arr);
    printf("array that deleted first value: ");
    out_element(number, arr);
    delete_k(&number, arr);
    out_element(number, arr);
    check_odd(number, arr);
}