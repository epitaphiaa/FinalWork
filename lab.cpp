#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

int main() {
    int a1, b1, c1, d1;
    int summa;

    printf("Введите 4 целых числа: ");//ввод чисел
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max1 = a;
    //рассчет двух наибольших
    if (b > max1) {
        max1 = b;
    }

    if (c > max1) {
        max1 = c;
    }

    if (d > max1) {
        max1 = d;
    }

    int max2 = (a != max1) ? a : b;

    if (c != max1 && c > max2) {
        max2 = c;
    }

    if (d != max1 && d > max2) {
        max2 = d;
    }
    //счет суммы двух наибольших
    summa = max1 + max2;

    printf("Сумма двух наибольших чисел: %d\n", summa);

    return 0;
}
