#include <stdio.h>

void putchar_combinations(int n, int max_digit) {
    if (n > max_digit) {
        return;
    }

    putchar('0' + n);

    if (n < max_digit) {
        putchar(',');
        putchar(' ');
        putchar_combinations(n + 1, max_digit);
    }
}

int main() {
    putchar_combinations(0, 9);
    putchar('\n');
    return 0;
}
