#include <stdio.h>

main(void)
{
    float a,b,c;
    printf("Inserisci a\n");
    scanf("%f", &a);
    printf("Inserisci b\n");
    scanf("%f", &b);
    printf("Inserisci c\n");
    scanf("%f", &c);
    if (a + b < c || b + c < a || a + c < b)
        printf("Non può essere un triangolo\n");
    else
    {
        if (a == b && b == c)
            printf("Equilatero\n");
        else
        {
            if((a == b && a != c) || (b == c && a != c) || (a == c && a != b))
                printf("Isoscele\n");
            else
                printf("Scaleno\n");
        }
    }
}
