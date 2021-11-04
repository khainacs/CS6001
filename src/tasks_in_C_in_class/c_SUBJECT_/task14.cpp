#include<stdio.h>
int main()
{
    int n;
    printf("nhap so nguyen n:\n");
    scanf("%d", &n);
    int hang_chuc = n / 10;
    int don_vi = n % 10;
    if ((n < 9) || (n > 100) )
    {
    	printf("nhap sai input\n");
        
    }
    else 
    {
     	if (n % 2 == 0)
        {

            switch(hang_chuc) 
            {
            case 1: printf("muoi");break;
            case 2: printf("hai muoi");break;
            case 3: printf("ba muoi"); break;
            case 4: printf("bon muoi"); break;
            case 5: printf("nam muoi"); break;
            case 6: printf("sau muoi"); break;
            case 7: printf("bay muoi");break;
            case 8: printf("tam muoi"); break;
            case 9: printf("chin muoi");break;
            }
         }    
        else if ((n / 10 != 0) && (n != 0))
        {
            switch(hang_chuc) 
            {
            case 1: printf("muoi");break;
            case 2: printf("hai muoi");break;
            case 3: printf("ba muoi"); break;
            case 4: printf("bon muoi"); break;
            case 5: printf("nam muoi"); break;
            case 6: printf("sau muoi"); break;
            case 7: printf("bay muoi");break;
            case 8: printf("tam muoi"); break;
            case 9: printf("chin muoi");break;
           }

           switch(don_vi)
           {
            case 1: printf("mot");break;
            case 2: printf("hai ");break;
            case 3: printf("ba "); break;
            case 4: printf("bon"); break;
            case 5: printf("nam "); break;
            case 6: printf("sau "); break;
            case 7: printf("bay ");break;
            case 8: printf("tam "); break;
            case 9: printf("chin");break;
           }

        
	    }
    }  

}