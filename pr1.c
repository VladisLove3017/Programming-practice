#include <stdio.h>

int main() {
    float t1, t2, t3;
    printf("Введіть час, необхідний першому гостю, щоб з'їсти пиріг (у годинах): ");
    scanf("%f", &t1);
    printf("Введіть час, необхідний другому гостю, щоб з'їсти пиріг (у годинах): ");
    scanf("%f", &t2);
    printf("Введіть час, необхідний третьому гостю, щоб з'їсти пиріг (у годинах): ");
    scanf("%f", &t3);

    float total_time = (t1 + t2 + t3) / 3;
    printf("Загальний час, необхідний гостям, щоб з'їсти один пиріг: %.2f годин\n", total_time);

    return 0;
}
