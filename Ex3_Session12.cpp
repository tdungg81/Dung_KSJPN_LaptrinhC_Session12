#include <stdio.h>

// Hàm tính giai th?a
long long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    printf("Giai thua cua %d la %lld\n", number, factorial(number));
    return 0;
}
