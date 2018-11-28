#include <stdlib.h>
#include <stdio.h>

char *read_line(void);
void *my_malloc(size_t size);
void *my_realloc(void *p, size_t size);

int main(void)
{
    char *s;
    s = read_line();
    printf("%s\n", s);
    return 0;
}

char *read_line(void)
{
    int n = 0;
    int dim = 2;
    char *inptLine;
    char *temp;
    char ch;

    inptLine = my_malloc(dim);
    while ((ch = getchar()) != EOF)
    {
        if (n >= dim)
        {
            dim *= 2;
            temp = my_realloc(inptLine, dim);
            if (temp != NULL)
                inptLine = temp;
        }

        if (ch == '\n')
        {
            inptLine[n] = '\0';
            break;
        }

        inptLine[n++] = ch;
    }
    return inptLine;
}


void *my_malloc(size_t size)
{
    if (malloc(size) == NULL)
    {
        printf("malloc failure\n");
        exit(1);
    }
    else
        return malloc(size);
}

void *my_realloc(void *p, size_t size)
{
    if (p == NULL)
    {
        printf("NULL pointer\n");
        exit(1);
    }
    else
        return realloc(p, size);

}
