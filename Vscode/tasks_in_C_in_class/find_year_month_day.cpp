#include<stdio.h>
int main()
{
    int month, year, day;
    printf("enter day:\n");
    scanf("%d", &day);
    printf("enter month:\n");
    scanf("%d", &month);
    printf("enter day:\n");
    scanf("%d", &day);
    switch(month)
    {
       case 1: case 3: case 5: case 7: case 8: case 10: case 12:
          if( (day >= 1) && (day <= 31) )
          {
          	printf("%d ngay %d thang %d nam: hop le\n", day, month, year);
          	break;
          }
          else
          {
          	printf("%d ngay %d thang %d nam: khong hop le\n", day, month, year);
          	break;
          }

        case 4: case 6: case 9: case 11:
          if ((day >= 1) && (day <= 30))
          {
          printf("%d ngay %d thang %d nam: hop le\n", day, month, year);
          	break;
          }
          else
          {
          	printf("%d ngay %d thang %d nam: khong hop le\n", day, month, year );
          	break;
          }
        case 2:
            if (year / 4 == 0)
            {
            	if ((day >= 1) || (day <= 29))
            	{
            		printf("%d ngay %d thang %d nam: hop le\n",day, month, year);
            		break;
            	}
            	else
            	{
            		printf("%d ngay %d thang %d nam: khong hop le\n",day, month, year);
            		break;
            	}
            }
            else
            {
            	if ((day >= 1) && (day <= 28))
            	{
            		printf("%d ngay %d thang %d nam: hop le\n",day, month, year);
            		break;
            	}
            	else
            	{
            		printf("%d ngay %d thang %d nam: hop le\n", day, month, year);
            		break;
            	}

            }
    default: printf("%d ngay %d thang %d nam: hop le\n", day, month, year);
 
    }
}