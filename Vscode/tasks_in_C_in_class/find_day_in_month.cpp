#include<stdio.h>
int main()
{
	int month, year;
	printf("enter a month:\n");
	scanf("%d", &month);
	if ((month < 1) || (month > 12))
	{
		printf("Do not have that month\n");
	}
	else
	{
		switch(month)
		{
			case 1: (" this month has 31 days");
			case 2: 
			       print("enter year:");
			       scanf("%d", &year);
			       if (year / 4 == 0)
			       {
			       	    printf("this month has 29 days");
			       }
			       else
			       {
			       	    printf("this month has 28 days");
			       }
			case 3:("this month has 31 days");
			case 4:("this month has 30 days");
			case 5:("this month has 31 days");
			case 6:("this month has 30 days");
			case 7:("this month has 31 days");
			case 8:("this month has 31 days");
			case 9:("this month has 30 days");
			case 10:("this month has 31 days");
			case 11:("this month has 30 days");
			case 12:("this month has 31 days");


		} 
	}
}