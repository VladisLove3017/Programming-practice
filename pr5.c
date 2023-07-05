#include <stdio.h>

int countSequences(int n) {
    const int MOD = 12345;
    int dp[n+1];

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;

    for (int i = 3; i <= n; i++) {
        // Обчислюємо кількість послідовностей довжиною i, де не зустрічаються три одиниці підряд.
        // Для dp[i] використовуємо суму dp[i-1] та dp[i-1].
        // dp[i-1] - кількість послідовностей, де останній символ є 0
        // dp[i-1] - кількість послідовностей, де останні два символи є 01
        dp[i] = (dp[i-1] + dp[i-1]) % MOD;
    }

    return dp[n];
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result+1);

    return 0;
}}
