#include <stdio.h>

int musbatmi(int n) {
    if (n > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d", musbatmi(n));

    return 0;
}