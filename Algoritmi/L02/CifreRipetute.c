#include <stdio.h>

int main(void)
{
    int n,x;
    int a[16] = {};
    scanf("%d", &n);
    int i = 0;
    while (n != 0)
    {
        x = n % 10;
        a[i] = x;
        i++;
        n /= 10;
    }
    /*for (i=0; i<sizeof(a)/sizeof(a[0]); i++)
        printf("%d ", a[i]);*/
    int c;
    for (i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        if (a[i] == 0)
            continue;
        else
        {
            int j;
            c = 0;
            for (j=0; j<16; j++)
            {
                if (a[i] == a[j])
                    c++;
            }
            if (c > 1)
            {
                printf("La cifra %d è ripetuta %d volte\n", a[i], c);
                break;
            }
        }
    }
    return 0;
}
