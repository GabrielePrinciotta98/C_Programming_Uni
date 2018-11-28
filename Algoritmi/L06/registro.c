#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *my_realloc(void *p, size_t size);
void *my_malloc(size_t size);

char **newBook(int n, char *book[]);
char **prenota(int k, char *name, char *book[]);
char **cancella(int k, char *book[]);
char **muovi(int from, int to, char *book[]);
void printBook(char *book[], int dim);

int main(void)
{
    char c;
    int dim = 5;
    int k,i;
    char nome[30];
    char **book = my_malloc(dim * sizeof(char *));
    for (i = 0; i<dim; i++)
        book[i] = NULL;
    printf("REGISTRO INIZIALE:\n");
    printBook(book, dim);
    while((c = getchar()) != 'f')
    {
        k = 0;
        switch (c)
        {
            case 'b':
                    scanf("%d", &dim);
                    book = newBook(dim, book);
                    //printf("DIM: %d\n", dim);
                    printBook(book, dim);
                    break;
            case '+':
                    scanf("%d %s", &k, nome);
                    if (k < dim && k >= 0)
                    {
                        book = prenota(k, nome, book);
                        //printf("DIM: %d\n", dim);
                        printBook(book, dim);
                    }
                    else
                        printf("Posto %d inesistente!!!\n", k);
                    break;
            case '-':scanf("%d", &k);
                    if (k < dim && k >= 0)
                    {
                        book = cancella(k, book);
                        //printf("DIM: %d\n", dim);
                        printBook(book, dim);
                    }
                    else
                        printf("Posto %d inesistente!!!\n", k);
                    break;
            case 'm':scanf(" %d %d\n", &k, &i);
                    if (k < dim && k >= 0 && i < dim && i >= 0)
                    {
                        book = muovi(k, i, book);
                        printf("check\n");
                        printBook(book, dim);
                    }
                    else
                        printf("Almeno un posto inserito è errato!\n");
                    break;
            case 'p':
                    printf("stampa:\n");
                    //printf("DIM: %d\n", dim);
                    printBook(book, dim);
                    break;
        }
    }

    return 0;
}

char **newBook(int n, char *book[])
{
    int i;
    char **new;
    new = my_realloc(book, n * sizeof(char *));
    for (i = 0; i < n; i++)
    {
        new[i] = NULL;
        //printf("Null inserito\n");
    }
    return new;
}

char **prenota(int k, char *name, char *book[])
{
    //printf("POSTO ATTUALEf:%s\n", book[k]);
    char *persona;
    if (book[k] == NULL)
    {
        persona = my_malloc(strlen(name) + 1);
        strcpy(persona, name);
        book[k] = persona;
        printf("Aggiungo:%s\n", book[k]);
    }
    else
    {
        printf("posto %d occupato da %s\n", k, book[k]);
    }
    //printf("POSTO AGGIORNATO:%s\n", book[k]);
    return book;
}

char **cancella(int k, char *book[])
{
    if (book[k] != NULL)
        book[k] = NULL;
    else
        printf("Il posto %d non è prenotato!\n", k);
    return book;
}

char **muovi(int from, int to, char *book[])
{
    //char *temp;
    if (book[from] == NULL)
        printf("Il posto %d è libero!!\n", from);
    else
        if (book[to] != NULL)
            printf("Il posto %d è occupato!!!\n", to);
        else
        {
            //temp = book[from];
            book[to] = book[from];
            book[from] = NULL;
        }
    return book;
}

void printBook(char *book[], int dim)
{
    int i;
    if (dim == 0)
    {
        book[0] = '\0';
        printf("Errore di aggiornamento: registro vuoto\n");
    }
    printf("Registro[0...%d]\n", dim - 1);
    for (i = 0; i<dim; i++)
    {
        if (book[i] != NULL)
            printf("<%s>\n", book[i]);
        else
        {
            printf("*\n");
        }
    }
    printf("\n");
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
    {
        return realloc(p, size);
    }

}
