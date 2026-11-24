#include <stdio.h>

void chiqar(int i, int n) {
    if (i > n)
        return;
    printf("%d ", i);
    chiqar(i + 1, n);
}

int main() {
    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);

    chiqar(1, n);
    printf("\n");

    return 0;
}
