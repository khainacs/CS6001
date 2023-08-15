#include<stdio.h>
#include<math.h>
void input_element(int a[], int *n)
{
    printf("enter the size of array:\n");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

}
int find_poisitive_X(int a[], int n, int x)
{
    int position = -1;
    for (int index = 0; index < n; index++)
    {
        if(a[index] == x)
        {
           position = index;
        }
        
    }
    return position;
}
int find_prime(int n)
{
  if ( n < 2)
  {
    return 0;
  }
  else 
  {
    for (int index = sqrt(n); index >= 2; index--)
    {
        if (n % index == 0)
        {
            return 0;
        }
    }
  }
  return 1;
}
bool check_prime_number_in_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (find_prime(a[i]) == 1)
        {
            return true;
        }
    }
    return false;
}
bool alternating_negative_positive(int a[], int n)
{
    for (int index = 0; index <= n; index++)
    {
        if (a[index] * a[index+1] < 0)
        {
            return true;
        }
    }
    return false;
}
bool alternating_odd_even(int a[], int n)
{
    for (int index = 0; index <= n; index++)
    {
        if ((a[index] % 2 == 0 && a[index + 1] % 2 == 0) && (a[index] % 2 != 0 && a[index + 1] != 0))
        {
            return false;
        }
    }
    return true;
}
bool check_ascending_array(int a[], int n)
{
    for (int index = 0; index < n; index++)
    {
        if (a[index] > a[index + 1])
        {
            return false;
        }
    }
    return true;
}
int calculate_prime_number(int a[], int n)
{
    int sum = 0;
    for (int index = 0; index <= n; index++)
    {
        if (find_prime(a[index]) == 1)
        {
            sum += a[index];
        }
    }
    return sum;
}
float calculate_average_elements_in_array(int a[], int n)
{
    int sum = 0;
    for (int item = 0; item < n; item++)
    {
        sum += a[item];
    }
    sum = sum / n;
    return sum;
}
int sum_element_smaller_x(int a[], int n, int x)
{
    int sum = 0;
    for (int index = 0; index < n; index++)
    {
        if (a[index] < x)
        {
           sum += a[index];
        }
    }
    sum = sum / n;
    return sum;
}
void sort_element_descending(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j] > a[j-1])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}
void sort_element_odd_ascending(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] % 2 != 0)
                {
                    if (a[i] > a[j])
                    {
                       int temp = a[i];
                       a[i] = a[j];
                       a[j] = temp;
                    }
                }
            }
        }
    }
}
void output_element(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[50];
    int n, x;
    input_element(a, &n);
    printf("enter x:\n");
    scanf("%d", &x);
    if (find_poisitive_X(a, n, x) == -1)
    {
        printf("this element is not existence in array\n");
    }
    else 
    {   
        printf("the position of element X is %d\n ", find_poisitive_X(a, n, x));
    }

    if (check_prime_number_in_array(a, n) == true)
    {
        printf("existence of primes in the array\n ");
    }
    else
    {
        printf("no existence of primes in array\n");
    }

    if (alternating_negative_positive(a, n) == true)
    {
        printf("there is an alternation of negative and positive numbers in the array\n");
    }
    else
    {
        printf("there is not an alternation of negative and positive numbers in the array\n");
    }

    if (alternating_odd_even(a, n) == true)
    {
        printf("there is an alternation of odd and even numbers in the array\n");
    }
    else
    {
        printf("there is not an alternation of odd and even numbers in the array\n");
    }

    if (check_ascending_array(a, n) == true)
    {
        printf("This is an ascending array\n");
    }
    else
    {
        printf("This is not an ascending array\n");
    }
    printf("sum of primes in array %d \n", calculate_prime_number(a, n));
    printf("the average of elements in array is %f\n", calculate_average_elements_in_array(a, n));
    if (sum_element_smaller_x(a, n, x) == 0)
    {
        printf("in array, there  is not elements smaller x\n");
    }
    else
    {
       printf("the average of elements in array %d\n", sum_element_smaller_x(a, n, x));
    }


    sort_element_odd_ascending(a, n);
    printf("the poisition of odd elements  in array sorted in descending order\n");
    output_element(a, n);

    sort_element_descending(a, n);
    printf("the poisition of elements  in array sorted in descending order\n");
    output_element(a, n);


}
