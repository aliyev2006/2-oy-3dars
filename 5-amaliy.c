#include <stdio.h>

long long daraja(int a, int n) {
    if (n == 0)
        return 1;
    return a * daraja(a, n - 1);
}

int main() {
    int a, n;
    printf("a ni kiriting: ");
    scanf("%d", &a);
    printf("n ni kiriting: ");
    scanf("%d", &n);

    printf("%d ^ %d = %lld\n", a, n, daraja(a, n));

    return 0;
}
