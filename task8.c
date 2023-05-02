#include <stdio.h>

int main() {
    int summ_razn=0, razn=0, max_razn=0, n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n-1; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n-1; i++) {
        razn = abs(arr[i]-arr[i+1]);
        if (razn>max_razn && abs((i+1)-n)>=2) max_razn = razn;

    }
}