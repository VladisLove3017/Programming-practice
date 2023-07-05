#include <stdio.h>
#include <math.h>

double calculateDistance(int x1, int y1, int x2, int y2) {
    // Обчислення відстані між двома точками за формулою відстані
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

int main() {
    int x1, y1, x2, y2;
    printf("Введіть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть координати кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Обчислення довжини вектора за заданими координатами
    double result = calculateDistance(x1, y1, x2, y2);

    printf("Довжина вектора: %.6f\n", result);

    return 0;
}
