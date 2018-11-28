#include <stdio.h>

void split_time (long int tot_sec, int *h, int *m, int *s);

int main(void)
{
    long int x;
    int ore, min, sec;
    printf("Inserisci tempo in secondi:\n");
    scanf("%ld", &x);
    split_time(x, &ore, &min, &sec);
    printf("%d ore,%d minuti,%d secondi\n", ore, min, sec);
    return 0;
}

void split_time (long int tot_sec, int *h, int *m, int *s)
{
    *h = tot_sec / 3600;
    *m = (tot_sec % 3600) / 60;
    *s = (tot_sec % 3600) % 60;
}
