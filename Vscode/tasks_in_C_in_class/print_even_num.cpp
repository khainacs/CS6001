#include<stdio.h>
int main()
{
	int n;
	int item = 2;
	printf("enter number:\n");
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("error condition");
	} 
	else if (item % 2 == 0)
	{
        while ((item <= n ) && (item % 2 == 0))
		   {
		     printf("%d\n", item);
		      item += 2;	    
		   }
		
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
 

