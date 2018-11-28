#include <stdio.h>
#include <math.h>

int main(void)
{
    float raggio;
    printf("Inserisci raggio:\n");
    scanf("%f", &raggio);
    printf("%f\n", raggio * raggio * M_PI);
}
