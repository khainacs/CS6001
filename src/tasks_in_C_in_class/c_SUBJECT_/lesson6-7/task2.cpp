#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void output_array(int a[],int n) 
{

    printf("the number of elements entered: \n");
    int i;
    srand(time(NULL));
    for(i=0; i<n; i++) 
    {
        printf("a[%d] = %d \n",i,0-rand()%n);
    }

}

int main() 
{
    int n;
    int a[n];
    printf("enter the number of elements\n: ");
    scanf("%d",&n);
    output_array(a, n);
}