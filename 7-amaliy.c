#include <stdio.h>

int raqamlar_soni(int n) {
    if (n < 10)
        return 1;
    return 1 + raqamlar_soni(n / 10);
}

int main() {
    int n;
    printf("Natural son kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar soni = %d\n", raqamlar_soni(n));

    return 0;
}
