#include <stdio.h>

int raqamlar_yigindisi(int n) {
    if (n == 0)
        return 0;
    return n % 10 + raqamlar_yigindisi(n / 10);
}

int main() {
    int n;
    printf("Natural son kiriting: ");
    scanf("%d", &n);

    printf("Raqamlar yig'indisi = %d\n", raqamlar_yigindisi(n));

    return 0;
}
