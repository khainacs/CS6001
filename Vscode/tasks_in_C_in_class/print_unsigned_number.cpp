#include<stdio.h>
int main()
{
	int n;
	int item = 1;
	printf("enter number:\n");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("error condition");
	} 
	else 
	{
		while (item < n )
		{
		  printf("%d", item);
		   item += 1;	    
		}
	}
}
    
