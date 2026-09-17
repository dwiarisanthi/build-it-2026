#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    long long jumlah = 0;
    long long angka;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &angka);
        jumlah += angka;
    }

    if (jumlah < 0)
    {
        jumlah = -jumlah;
    }

    printf("%lld\n", jumlah);

    return 0;
}