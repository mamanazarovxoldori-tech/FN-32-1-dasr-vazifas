#include <stdio.h>

int oxirgiRaqam(int n) {
    if (n < 0) {
        n = -n;
    }
    return n % 10;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", oxirgiRaqam(n));

    return 0;
}