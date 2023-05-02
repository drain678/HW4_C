#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary[33]="", ostatok[2]="";
    int chastnoe, chislo;
    scanf("%d", &chislo);
    chastnoe=abs(chislo); // число которое будет переводиться должно быть положительным
    while (chastnoe>0) {
        sprintf(ostatok, "%d", chastnoe%2); // вычисление остатка от деления и его запись в массив
        strcat(binary, ostatok);
        chastnoe/=2;
    }
    int len = strlen(binary);
    for (int j=0; j<len/2; j++) { // разворот массива
        char temp = binary[j];
        binary[j] = binary[len - j - 1];
        binary[len - j - 1] = temp;
    }
    if (chislo<0) {
        char result[34]=""; // если введенное число было отрицательное, то к получившемуся числу нужно добавить знак минус слева
        char sign[2]="-";
        strcat(result, sign);
        strcat(result, binary);
        printf("%s", result);
    } else if (chislo==0) printf("%d", 0); // если введенное число было 0, то его и вывести
    else printf("%s", binary);
    return 0;
}