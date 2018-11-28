#include <stdio.h>
#include <string.h>

#define N 101

int main(void)
{
    char parola[N];
    char reverse[N];
    scanf("%s", parola);
    int j = strlen(parola) - 1;
    char *p = &parola[0];
    char *r = &reverse[j];
    *r = '\0';
    r--;
    while(*p != '.')
    {
        *r = *p;
        r--;
        p++;
    }

    printf("%s\n", reverse);
    p = parola;
    r = reverse;
    int c = 0;
    while(*r != '\0')
    {
        if (*r == *p)
            c++;
        r++;
        p++;
    }
    if (c == strlen(reverse))
        printf("palindroma\n");
    else
        printf("no palindroma\n");
    return 0;
}
