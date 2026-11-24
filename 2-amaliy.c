#include <stdio.h>

void chiqar(int n) {
    if (n < 1)
        return;
    printf("%d ", n);
    chiqar(n - 1);
}

int main() {
    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);

    chiqar(n);
    printf("\n");

    return 0;
}
