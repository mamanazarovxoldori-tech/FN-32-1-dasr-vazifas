#include <stdio.h>

int boluvchilar(int n) {
    if (n < 0) {
        n = -n;
    }
    if (n == 0) {
        return 0;
    }

    int soni = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            soni++;
        }
    }

    return soni;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", boluvchilar(n));

    return 0;
}