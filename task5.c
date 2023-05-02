#include <stdio.h>

int main() {
    float summ=0, i=0, chislo;
    scanf("%f", &chislo);
    while (!(chislo==0)) { // пока не введется 0, прибавлять к сумме введенное число, увеличивать количество итераций на 1, считывать новое число
        summ += chislo;
        i += 1;
        scanf("%f", &chislo);
    }
    printf("%f", summ/i); // формат должен быть float, чтобы все нормально разделилось
    return 0;
}