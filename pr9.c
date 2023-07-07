#include <stdio.h>

int minSteps(int x, int y) {
    int count = 0;

    // Цикл, поки x не дорівнює y
    while (x != y) {
        // Якщо x менше y, зробити крок вперед
        if (x < y) {
            if (y - x == 1) {
                count++;
                break;
            }
            else if ((y - x) % 2 == 0) {
                count ++;
                break;
            }
            else {
                y--;
                count += 2;
            }
        }
        // Якщо x більше y, зробити крок назад
        else {
            if (x - y == 1) {
                count++;
                break;
            }
            else {
                x--;
                count++;
            }
        }
    }

    return count;
}

int main() {
    int x, y;
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);

    int steps = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", steps);

    return 0;
}
