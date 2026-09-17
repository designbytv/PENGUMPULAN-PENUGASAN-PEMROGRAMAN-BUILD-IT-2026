#include <stdio.h>

void swap(long long *a, long long *b) {
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    long long a, b, c;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) return 0;

    if (a > b) swap(&a, &b);
    if (b > c) swap(&b, &c);
    if (a > b) swap(&a, &b);

    // a = terendah (x), b = tengah (y), c = tertinggi (z)
    long long ronde_1 = b - a; // Ronde hingga x == y
    long long ronde_2 = c - b; // Ronde hingga z == y

    // Ambil nilai terkecil dari kedua kemungkinan
    long long ans = (ronde_1 < ronde_2) ? ronde_1 : ronde_2;

    printf("%lld\n", ans);

    return 0;
}