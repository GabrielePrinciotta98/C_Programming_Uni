#include <stdio.h>

int lung_stringa(char *s);

int main(void)
{
    char stringa[100];
    scanf("%s", stringa);
    printf("%d\n", lung_stringa(stringa));
    return 0;
}

int lung_stringa(char *s)
{
    int n = 0;
    while(*s != '\0')
    {
        n++;
        s++;
    }
    return n;
}
