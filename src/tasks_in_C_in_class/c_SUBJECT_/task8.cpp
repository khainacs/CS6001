#include<stdio.h>
int main()
{
    int start_renting, end_reting, rental_number, cost;
    do 
    {
        printf("enter the time starts renting:\n");
        scanf("%d", &start_renting);
        printf("enter the time ends reting:\n");
        scanf("%d", &end_reting);
    }while((start_renting < 6) || (start_renting > 21) || (end_reting > 21) || (start_renting > end_reting));

    do 
    {
        printf("enter the machine was rented\n");
        scanf("%d", &rental_number);
    }while(rental_number < 1);
    if (end_reting <= 17)
    {
        cost = 2500*(end_reting - start_renting)*rental_number;
    }
    else 
    {
        if (start_renting >= 18)
        {
            cost = 3000*(start_renting - end_reting)*rental_number;
        }
        else if (start_renting < 18)
        {
            cost = (2500*(18 - start_renting) + (end_reting - 18) + 250)*rental_number;
        }
    }
    printf("cost: %d(VND)\n", cost);
}