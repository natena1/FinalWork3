#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a1;                 //�������� ����������
    int b, c, d;            //������� ����������
    int min, n;                 //��������������� ����������
    printf("Input 4 numbers:");
    scanf("%d%d%d%d", &a1, &b, &c, &d);  //���������� ������

    min = fabs(a1 - b);                  //���������� ���������� �������� min
    n = 0;                              //������������ ������ ��� ������ ���� �����

    if (min > fabs(a1 - c)) {            //�������� �� ����������� �������� ��������
        min = fabs(a1 - c);              //���������� �������� min
        n = 1;                          //������������ ������ ��� ������ ���� �����
    }
    if (min > fabs(a1 - d)) {
        min = fabs(a1 - d);
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
    switch (n) {                    //����������� �� ������ ����� ���� ����� � ����������� ���������
    case 0:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", a1, b, min);
        break;
    case 1:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", a1, c, min);
        break;
    case 2:
        printf("Minimal difference between %d and %d equal: %d\n\n\n", a1, d, min);
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
