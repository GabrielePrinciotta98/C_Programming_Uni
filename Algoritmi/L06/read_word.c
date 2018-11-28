#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char *read_word(void);
void *my_malloc(size_t size);
void *my_realloc(void *p, size_t size);

int main()
{
    char *s;
    s = read_word();
    printf("%s\n", s);
    return 0;
}

char *read_word(void)
{
    char *inptWord;
    char ch;
    char *temp;
    int n = 0;
    int dim = 2;
    inptWord = my_malloc(dim);

    while ((ch = getchar()) != EOF)
    {
        if (n >= dim)
        {
            dim *= 2;
            temp = my_realloc(inptWord, dim);
            if (temp != NULL)
                inptWord = temp;
            else
                return temp;
        }
        if (ch == '\n')
        {
            inptWord[n] = '\0';
            break;
        }
        if (ch == ' ')
        {
            inptWord[n] = '\0';
            break;
        }
        if (isalnum(ch) == 0 && n == 0)
        {
            inptWord[n] = '\0';
            break;
        }
        inptWord[n++] = ch;
    }
    return inptWord;
}

void *my_malloc(size_t size)
{
    void *p = malloc(size);
    if (p == NULL)
    {
        printf("malloc failure\n");
        exit(1);
    }
    else
        return p;
}

void *my_realloc(void *p, size_t size)
{
    if (p == NULL)
    {
        printf("NULL pointer\n");
        exit(1);
    }
    else
    {
        //free(p);
        return realloc(p, size);
    }
}
