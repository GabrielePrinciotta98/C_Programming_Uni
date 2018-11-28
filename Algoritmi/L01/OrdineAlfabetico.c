#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    char ch1,ch2;
    printf("Inserisci primo carattere:\n");
    scanf(" %c", &ch1);
    printf("Inserisci secondo caattere:\n");
    scanf(" %c", &ch2);
    ch1 = toupper(ch1);
    ch2 = toupper(ch2);
    printf("%d\n", (int)(fabs(ch2 - ch1)) + 1);
}
