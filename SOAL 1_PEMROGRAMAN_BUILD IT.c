#include <stdio.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    long long total_sum = 0;
    for (int i = 0; i < N; i++) {
        long long val;
        scanf("%lld", &val);
        total_sum += val;
    }

    long long min_operations = total_sum < 0 ? -total_sum : total_sum;

    printf("%lld\n", min_operations);

    return 0;
}