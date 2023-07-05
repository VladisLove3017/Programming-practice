#include <stdio.h>
#include <math.h>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислення відстані між центрами коліс
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Перевірка умов для визначення кількості точок перетину
    if (distance > r1 + r2) {
        // Кола не перетинаються
        return 0;
    } else if (distance == 0 && r1 == r2) {
        // Кола співпадають
        return -1;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Кола торкаються зовні або всередині одне одного
        return 1;
    } else if (distance < r1 + r2 && distance > fabs(r1 - r2)) {
        // Кола перетинаються в двох точках
        return 2;
    } else {
        // Кола мають безкінечну кількість точок перетину
        return -1;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    printf("Введіть координати та радіус першого кола (x1, y1, r1): ");
    scanf("%d %d %d", &x1, &y1, &r1);
    printf("Введіть координати та радіус другого кола (x2, y2, r2): ");
    scanf("%d %d %d", &x2, &y2, &r2);

    // Підрахунок кількості точок перетину
    int result = countIntersectionPoints(x1, y1, r1, x2, y2, r2);

    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
