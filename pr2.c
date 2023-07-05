#include <stdio.h>

// (НСД)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// (НСК)
int findLCM(int arr[], int n) {
    int lcm = arr[0];
    for (int i = 1; i < n; i++) {
        int gcd = findGCD(lcm, arr[i]);
        lcm = (lcm * arr[i]) / gcd;
    }
    return lcm;
}

int main() {
    int r;
    printf("Введіть кількість чисел р: ");
    scanf("%d", &r);

    int numbers[r];
    printf("Введіть %d натуральних чисел, розділених пробілом: ", r);
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = findLCM(numbers, r);
    printf("Найменше спільне кратне: %d\n", lcm);

    return 0;
}
