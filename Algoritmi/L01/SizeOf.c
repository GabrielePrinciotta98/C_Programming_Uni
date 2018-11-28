#include <stdio.h>
#include <limits.h>

int main(void)
{
    char carattere;
    short corto;
    int intero;
    long lungo;
    //float virgola;
    //double doppio;
    printf("%li%s%i%s%i\n", sizeof(carattere), " Intervallo: ", SCHAR_MIN, " - ", SCHAR_MAX);
    printf("%li%s%i%s%i\n", sizeof(corto), " Intervallo: ", SHRT_MIN, " - ", SHRT_MAX);
    printf("%li%s%i%s%i\n", sizeof(intero), " Intervallo: ", INT_MIN, " - ", INT_MAX);
    printf("%li%s%li%s%li\n", sizeof(lungo), " Intervallo: ", LONG_MIN, " - ", LONG_MAX);
    //printf("%li%f%s%f\n", sizeof(virgola), FLOAT_MIN, " - ", FLOAT_MAX);
    //printf("%d%f%f\n", sizeof(doppio), );
}
