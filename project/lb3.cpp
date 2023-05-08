#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

// Привет, Оля!
int main()
{
    int a, b, c, d;             //вводимы переменные
    int min, n;                 //вспомогательные переменные
    printf("Input 4 numbers:");
    scanf("%d%d%d%d", &a, &b, &c, &d);  //считывание данных

    min = fabs(a - b);                  //присвоение начального значения min
    n = 0;                              //установление флажка для первой пары чисел

    if (min > fabs(a - c)) {            //проверка на минимальное значение разность
        min = fabs(a - c);              //присвоение значения min
        n = 1;                          //установление флажка для второй пары чисел
    }
    if (min > fabs(a - d)) {
        min = fabs(a - d);
        n = 2;
    }
    if (min > fabs(b - c)) {
        min = fabs(b - c);
        n = 3;
    }
    if (min > fabs(b - d)) {
        min = fabs(b - d);
        n = 4;
    }
    if (min > fabs(c - d)) {
        min = fabs(c - d);
        n = 5;
    }
    switch (n) {                    //определение по флажку какая пара чисел с минимальной разностью
    case 0:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", a, b, min);
        break;
    case 1:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", a, c, min);
        break;
    case 2:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", a, d, min);
        break;
    case 3:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", b, c, min);
        break;
    case 4:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", b, d, min);
        break;
    case 5:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", c, d, min);
        break;
    default: printf("Minimal not found");
    }

}
