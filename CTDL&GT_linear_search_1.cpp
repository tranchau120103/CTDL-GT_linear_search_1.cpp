https://cafedev.vn/thuat-toan-linear-search-gioi-thieu-chi-tiet-va-code-vi-du-tren-nhieu-ngon-ngu-lap-trinh/

#include <stdio.h> 
#include <conio.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n;
    printf("hay nhap so phan tu");
    scanf("&n");
    int t = search(arr, n, x);
    if (t == -1)
        printf("khong tim thay\n");
    else
        printf("tim thay tai vi tri %d\n", t);
    return 0;
}
