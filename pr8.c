#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long countAnagrams(char *word) {
    int length = strlen(word);
    int counts[26] = {0};

    // Розрахунок кількості входжень кожної букви в слово
    for (int i = 0; i < length; i++) {
        int index = word[i] - 'A';
        counts[index]++;
    }

    // Розрахунок добутку факторіалів кількостей входжень
    unsigned long long product = 1;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 1) {
            product *= factorial(counts[i]);
        }
    }

    // Розрахунок кількості анаграм
    unsigned long long totalAnagrams = factorial(length) / product;
    return totalAnagrams;
}

int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);

    unsigned long long result = countAnagrams(word);
    printf("Кількість анаграм: %llu\n", result);

    return 0;
}
