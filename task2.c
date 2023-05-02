#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    for (int i=0; i<n-1; i++) { // заполнение пробелами пустые позиции
        printf("   ");
    }
    for (int i=1; i<=k; i++) { // вывод календаря
        if (i < 10) { // если цифра меньше 10, то ему нужно добавить слева пробел
            printf("  ");
            printf("%d", i);
        } else {
            printf(" "); // пробел для отступа
            printf("%d", i);
        }
        if ((i + n-1) % 7 == 0) printf("\n"); // перенос на новую строчку
    }
    return 0;
}