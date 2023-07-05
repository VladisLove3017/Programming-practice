#include <stdio.h>
#include <math.h>

long long countNumbers(int n) {
    long long totalNumbers = pow(2, n);  // Загальна кількість чисел з p розрядів
    long long excludedNumbers = n - 2;  // Кількість чисел, де три однакові цифри стоять поруч

    return totalNumbers - excludedNumbers;
}

int main() {
    int n;
    printf("Введіть кількість розрядів (n): ");
    scanf("%d", &n);

    long long result = countNumbers(n);
    printf("Кількість чисел з %d розрядами: %lld\n", n, result);

    return 0;
}
