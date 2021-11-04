#include<stdio.h>
int check_condition(int a[], int n)
{
    for (int i = 0; i< n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                return 0;
            }
        }
    }
    return 1;
}
void input_element(int a[], int n)
{
        do 
        {
            for (int i = 0; i < n ; i++)
            {
                printf("enter a[%d] = ", i);
                scanf("%d", &a[i]);
            
               if (check_condition(a, n) == 0)
               {
                  printf("enter again!\n");
                  scanf("%d", &a[i]);
                }
            }
        }while(check_condition(a, n) == 0);
  
}
void output_elements(int a[], int n)
{
    printf("array include elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int check_square_number(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i*i == n)
        {
            return 1;
            break;
        }
    }
    return 0;
}
void listed_square_number(int a[], int n)
{
    
    printf("The squares are at odd places");
    for (int i = 0; i < n; i++)
    {
        if (check_square_number(a[i]) && (i % 2 != 0))
        {
            printf("\t%d", a[i]);
        }
    }
}
void find_the_largest_integer(int a[], int n)
{
    int vtmax = 0;
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            vtmax = i;
        }
        
    }
    printf("the largest element is at the odd place is %d\n", vtmax);
}
void calculate_total(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i += 2)
    {
        sum += a[i];
    }
    printf("calculate elements in even place is %d\n", sum);
}
void sort_array(int a[], int n)
{
    int tmp;
    for (int i = 0; i< n-1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] < a[j-1])
            {
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }

    }
    printf("array is sorted:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
   
}
int main ()
{
    int n, a[100];
    input_element(a, n);
    printf("enter n\n");
    scanf("%d", &n);
    input_element(a, n);
    output_elements(a, n);
    listed_square_number(a, n);
    find_the_largest_integer(a, n);
    calculate_total(a, n);
    sort_array(a, n);
    

}
