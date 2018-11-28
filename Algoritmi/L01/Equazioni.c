#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c;
    float delta;
    float x1,x2;
    printf("Inserisci a:\n");
    scanf("%f", &a);
    //printf("%f\n", a);
    printf("Inserisci b:\n");
    scanf("%f", &b);
    printf("Inserisci c:\n");
    scanf("%f", &c);
    delta = b*b - 4*a*c;
    if (delta > 0)
    {
        float radice;
        radice = sqrt(delta);
        x1 = (-b + radice)/2;
        x2 = (-b - radice)/2;
        printf("X1:\n");
        printf("%f\n", x1);
        printf("X2\n");
        printf("%f\n", x2);
    }
    else
    {
        if (delta == 0)
        {
            printf("%f\n", -b/(2*a));
        }
        else
        {
            printf("Delta < 0!!!\n");
        }
    }
    return 0;
}
