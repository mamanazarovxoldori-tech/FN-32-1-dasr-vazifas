 #include <stdio.h>

int raqamlarSoni(int n) {
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        return 1;
    }

    int soni = 0;
    while (n > 0) {
        soni++;
        n /= 10;
    }

    return soni;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", raqamlarSoni(n));

    return 0;
}