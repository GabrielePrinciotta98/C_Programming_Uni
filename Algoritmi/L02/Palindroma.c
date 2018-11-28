#include <stdio.h>
#include <string.h>

int main(void)
{
    char parola[100] = {};
    char reverse[100] = {};
    int i=0;
    scanf("%s", parola);
    int j = strlen(parola);
    while (parola[i] != '.')
    {
        reverse[j-2] = parola[i];
        i++;
        j--;
    }
    printf("%s\n", reverse);
    i = 0;
    j = 0;
    int c = 0;
    while(reverse[i] != '\0')
    {
        if (reverse[i] == parola[j])
            c++;
        i++;
        j++;
    }
    if (c == strlen(reverse))
        printf("palindroma\n");
    else
        printf("no palindroma\n");
    return 0;
}
