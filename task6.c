#include <stdio.h>

int main() {
    int n, i, count=0;
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++) { // считывание массива
        scanf("%d", &arr[i]); 
    }
    for (i=0;i<n;i++) {
        if (arr[i]>0) { // если число больше нуля, то +1 к счетчику
            count+=1; 
        }
    }
    printf("%d", count);
    return 0;
}