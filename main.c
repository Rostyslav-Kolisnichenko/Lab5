#include <stdio.h>

int countSequences(int n) {
    int mod = 12345;
    int a = 1, b = 2, c = 4;

    if (n == 1)
        return a;
    if (n == 2)
        return b;
    if (n == 3)
        return c;

    int i, count;

    for (i = 4; i <= n; i++) {
        count = (a + b + c) % mod;
        a = b;
        b = c;
        c = count;
    }

    return count;
}

int main() {
    int n;
    printf("Введіть довжину послідовностей N: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}