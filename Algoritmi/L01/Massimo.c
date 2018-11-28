#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Inserisci x:\n");
    scanf("%d", &x);
    printf("Inserisci y:\n");
    scanf("%d", &y);
    x > y ? printf("x > y\n") : printf("x < y\n");
}
