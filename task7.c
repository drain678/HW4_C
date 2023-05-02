#include <stdio.h>

int main(){
    int n, positive=0, negative=0, zero=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) { // считывание массива
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++) { // проверка элементов массива на то, какие это числа по условию задачи и увеличение соответствующих переменных на 1
        if (arr[i]>0) positive+=1;
        if (arr[i]<0) negative+=1;
        if (arr[i]==0) zero+=1;
    }
    printf("%d %d %d", zero, positive, negative); 
    return 0;
}