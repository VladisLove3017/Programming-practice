#include <stdio.h>

int countEqualDivisors(int n) {
    int count = 0;

    for (int m = 2; m < n; m++) {
        // Перевірка умови рівних дільників
        if ((n / m) == (n % m)) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    int result = countEqualDivisors(n);
    printf("Кількість рівних дільників числа %d: %d\n", n, result);

    return 0;
}
