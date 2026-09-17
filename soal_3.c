#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007LL
int bandingkan(const void *a, const void *b)
{
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long *A = malloc(n * sizeof(long long));

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }
    qsort(A, n, sizeof(long long), bandingkan);

    long long total = (long long)n * (n - 1) / 2;
    long long sama = 0;

    int i = 0;

    while (i < n)
    {
        int j = i;

        while (j < n && A[j] == A[i])
        {
            j++;
        }
        long long banyak = j - i;
        sama += banyak * (banyak - 1) / 2;
        i = j;
    }

    long long jawaban = (total - sama) % MOD;
    printf("%lld\n", jawaban);

    free(A);

    return 0;
}