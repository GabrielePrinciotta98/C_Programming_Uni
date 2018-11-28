#include <stdio.h>
#include <string.h>

int isPalindroma(char *s);


int main(int argc, char *argv[])
{
    printf("%d\n", isPalindroma(argv[1]));
    return 0;
}


int isPalindroma(char *s)
{
    int c = 0;
    char *p,*q;
    p = s;
    q = s + (strlen(s) - 1);
    while (*p == *q && c < strlen(s) / 2)
    {
        c++;
        p++;
        q--;
    }
    if (c == strlen(s) / 2)
        return 1;
    else
        return 0;
}
