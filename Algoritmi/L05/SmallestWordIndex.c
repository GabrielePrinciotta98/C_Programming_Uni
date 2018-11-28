#include <stdio.h>
#include <string.h>

int smallest_word_index(char *s[], int n);

int main(void)
{
    char *dict[] = { "a" , "m" , "c" , "f" , "b" , "q" , "p" };
    int lun = 7;
    int pos;
    pos = smallest_word_index(dict, lun);
    printf ("La parola minima si trova in posizione %d.\n" , pos);
    return 0;
}

int smallest_word_index(char *s[], int n)
{
    int i,j,c;
    int min = 0;
    for(i=0; i<n;i++)
    {
        c = 0;
        for(j=0; j<n; j++)
        {
            if (strcmp(s[i],s[j]) <= 0)
            {
                min = i;
                c++;
            }
            if (strcmp(s[i],s[j]) > 0)
            {
                min = j;
                break;
            }
            printf("%s vs %s\n", s[i], s[j]);
            printf("%d\n", min);
        }
        if (c == n)
            break;
    }
    return min;
}
