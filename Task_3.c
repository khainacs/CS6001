///Solve the system of equations
#include<stdio.h>
int main()
{
    int A1, B1, C1, A2, B2, C2; 
    float D, Dx, Dy;
    printf("A1*x + B1*y = C1\n");
    printf("A2*x + B2*y = C2\n");
    printf("enter A1:\n");
    scanf("%d", &A1);
    printf("enter B1:\n");
    scanf("%d", &B1);
    printf("enter C1:\n");
    scanf("%d", &C1);
    printf("enter A2:\n");
    scanf("%d", &A2);
    printf("enter B2:\n");
    scanf("%d", &B2);
    printf("enter C2:\n");
    scanf("%d", &C2);
    D = A1 * B2 + A2 * B1;
    Dx = C1 * B2 + C2 * B1;
    Dy = A1 * C2 + A2 * C1;
    if (D == 0)
    {
        if (Dx + Dy == 0)
        {
            printf("The system of equations has infinitely many solutions\n");
        }
        else 
        {
            printf("The system of equations has no solution\n");
        }
    }
    else
    {
        float x = Dx / D;
        float y = Dy / D;
        printf("The system of equations has solution (x, y) = (%f, %f)\n", x, y);
    }
    return 0;

}