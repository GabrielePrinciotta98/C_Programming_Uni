#include <stdio.h>

int main(void)
{
    float t;
    printf("Inserisci la temperatura:\n");
    scanf("%f", &t);
    printf("%f\n", (t - 32)/1.8);
}
