#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void proverka_passwd(char password[]) {
    int b = 0, m = 0, d = 0, p = 0;
    for (int i = 0; i < strlen(password); i++) {
        char c = password[i];
        if ((c >= 33) && (c <= 126)) { // проверка, что символ в нужном диапазоне кодов ASCII
            if (isdigit(c)) d = 1; // проверка какие классы символовов присутствуют
            if (ispunct(c)) p = 1;
            if (isupper(c)) b = 1;
            if (islower(c)) m = 1;
        }
    }
    if (b + m + d + p >= 3) { // если присутствуют 3 класса значит и условие с ASCII тоже выполнилось и можно выводить YES
        printf("YES");
    } else {
        printf("NO");
    }
}

int main() {
    char s[1000];
    scanf("%s", s);
    if (!((8 <= strlen(s)) && (strlen(s) <= 14))) { // если длина пароля не подходит, то сразу вывод NO
        printf("NO");
    } else {
        proverka_passwd(s);
    }
    return 0;
}
