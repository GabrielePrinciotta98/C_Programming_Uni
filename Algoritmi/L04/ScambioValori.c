#include <stdio.h>

void scambia (int *p, int *q);

int main(void)
{
    int x, y;
    printf("Inserisci x:\n");
    scanf("%d", &x);
    printf("Inserisci y:\n");
    scanf("%d", &y);
    scambia(&x, &y);
    printf("x:%d ", x);
    printf("y:%d\n", y);
    return 0;
}

void scambia (int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
