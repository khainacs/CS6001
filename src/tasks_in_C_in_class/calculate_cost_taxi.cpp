#include<stdio.h>
int main(void){
	float kilometer, cost;
	printf("enter distance:\n");
	scanf("%f", &kilometer);
	if (kilometer < 1)
	{
		cost = kilometer * 5000;
		
	}
	else if (kilometer < 30)
	{
		cost = (kilometer - 1)*10000;
	}
	else
	{
        cost = (kilometer - 30)*30000 + 10000 + 5000;     
	}
	printf("receipt is %0.3f VND", cost);
}