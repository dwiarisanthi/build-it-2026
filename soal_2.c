#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long a, b, c;
    long long i, j, k;
    long long hasil;

    scanf("%lld %lld %lld", &a, &b, &c);

    if (a == b || a == c || b == c)
    {
        printf("0\n");
        return 0;
    }

    i = a;
    j = b;
    k = c;

    if (i > j)
    {
        long long temp = i;
        i = j;
        j = temp;
    }
    if (j > k)
    {
        long long temp = j;
        j = k;
        k = temp;
    }
    if (i > j)
    {
        long long temp = i;
        i = j;
        j = temp;
    }
    if (j - i < k - j)
        hasil = j - i;
    else
        hasil = k - j;

    printf("%lld\n", hasil);

    return 0;
}