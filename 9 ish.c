#include <stdio.h>

int teskari(int n) {
    int belgi = 1;

    if (n < 0) {
        belgi = -1;
        n = -n;
    }

    int natija = 0;
    while (n > 0) {
        natija = natija * 10 + n % 10;
        n /= 10;
    }

    return belgi * natija;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", teskari(n));

    return 0;
}