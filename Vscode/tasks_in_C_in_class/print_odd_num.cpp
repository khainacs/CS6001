#include<stdio.h>

int main()
{
	int n;
	int item = 1;
	printf("enter n:");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("error condition");
	}
	else
	{
		while (item < n) 
		{
			if (item % 3 != 0)
			{
			printf("%d\n", item);
			item += 1;
		    }
		    else
		    {
		    	item += 1;
		    }
		}
	}
}