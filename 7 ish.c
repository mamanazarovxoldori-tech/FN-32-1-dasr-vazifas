#include <stdio.h>

int kichikSon(int a, int b, int c) {
    int eng_kichik = a;

    if (b < eng_kichik) {
        eng_kichik = b;
    }
    if (c < eng_kichik) {
        eng_kichik = c;
    }

    return eng_kichik;
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d", kichikSon(a, b, c));

    return 0;
}