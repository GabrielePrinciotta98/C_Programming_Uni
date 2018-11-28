#include <stdio.h>
#include <math.h>

#define NUMERO 10

int main(void)
{
    float c = 1;
    int i;
    for (i = 0; i < NUMERO; i++)
    {
        float radice = sqrt(c);
        if (floor(radice) == radice)
            printf("%f\n", c);
        else
            i--;
        c++;
    }
    return 0;
}
