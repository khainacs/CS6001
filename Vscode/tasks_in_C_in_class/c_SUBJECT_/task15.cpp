#include<stdio.h>
int main()
{
    int number;
    printf("enter a number has 3 digits:\n");
    scanf("%d", &number);
    int units = number % 10;
    int tens = (number / 10) % 10;
    int hundreds = number / 100;
    switch(units)
    {
        case 1: printf("one hundred\t");
                break;
        case 2: printf("two hundred\t");
                break;
        case 3: printf("three hundred\t");
                break;
        case 4: printf("four hundred\t");
                break;
        case 5: printf("five hundred\t");
                break;
        case 6: printf("six hundred\t");
                break;
        case 7: printf("seven hundred\t");
                break;
        case 8: printf("eight hundred\t");
                break;
        case 9: printf("nine hundred\t");
                break;
    }
    if (tens% 10 == 0 && units != 0)
    {
        printf("odd\t");
    }
    switch(tens)
    {
        case 1: printf("ten\t");
                break;
        case 2: printf("twenty\t");
                break;
        case 3: printf("thirdty\t");
                break;
        case 4: printf("fourty\t");
                break;
        case 5: printf("fivety\t");
                break;
        case 6: printf("sixty\t");
                break;
        case 7: printf("seventy\t");
                break;
        case 8: printf("eighty\t");
                break;
        case 9: printf("ninety\t");
                break;
    }
    switch(units)
    {
        case 1: printf("one\n");
                break;
        case 2: printf("two\n");
                break;
        case 3: printf("three\n");
                break;
        case 4: printf("four\n");
                break;
        case 5: printf("five\n");
                break;
        case 6: printf("six\n");
                break;
        case 7: printf("seven\n");
                break;
        case 8: printf("eight\n");
                break;
        case 9: printf("nine\n");
                break;
    }
}