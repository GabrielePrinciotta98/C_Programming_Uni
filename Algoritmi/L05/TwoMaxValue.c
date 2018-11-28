#include <stdio.h>

#define N 5

void max_secondmax (int a[], int n, int *max, int *second_max);

/*int main(void)
{
    int nums[N] = {0};
    int *q;
    int *m;
    int *sm;
    for(q = nums; q < nums + N; q++)
        scanf("%d", q);
    printf("<%d>\n", max_secondmax(nums, N, m, sm));
    return 0;
}*/

void max_secondmax (int a[], int n, int *max, int *second_max)
{
    int *p;
    max = a;
    second_max = a;
    for (p = a; p < a + n; p++)
    {
        if (*p > *max)
        {
            max = p;
        }
    }
    for (p = a; p < a + n; p++)
    {
        if (*p > *second_max && *p < *max)
        {
            second_max = p;
        }
    }
}
