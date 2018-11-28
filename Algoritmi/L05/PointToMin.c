#include <stdio.h>
#define N 5

int *smallest(int a[], int n);

int main(void)
{
    int nums[N] = {0};
    int *q;
    for (q = nums; q < nums + N; q++)
        scanf("%d", q);
    printf("%d\n", *smallest(nums, N));
    return 0;
}

int *smallest(int a[], int n)
{
    int *p;
    int *min;
    min = a;
    for (p = a; p < a + n; p++)
    {
        if (*p < *min)
            min = p;
    }
    return min;
}
