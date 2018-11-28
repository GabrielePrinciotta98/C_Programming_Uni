#include <stdio.h>
#include <math.h>

int main(void)
{
    int b;
    int s[100] = {0};
    int i;
    int j = 0;
    int c = -1;
    int ris = 0;
    printf("Inserisci base:\n");
    scanf("%d", &b);
    printf("Inserisci numero in base b:\n");
    for (i=0; i<100; i++)
    {
        if (getchar() == '.')
            break;
        else
        {
            scanf("%d", &s[i]);
            c++;
        }
    }
    for (i=c-1; i>=0; i--)
    {
        ris += pow(b,i) * s[j];
        j++;
    }
    printf("%d\n", ris);
    return 0;
}
