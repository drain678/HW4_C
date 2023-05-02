#include <stdio.h>
#include <stdlib.h>

int main() {
    int month, year;
    int visokos[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ne_visokos[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d", &month, &year);
    if (year%400==0 || (year%4==0 && !(year%100==0))) { // если год високосный, то используем массив visokos, т. к. там в феврале 29 дней, а не 28
        printf("%d", visokos[month-1]);
    } else {
        printf("%d", ne_visokos[month-1]);
    }
    return 0;
}