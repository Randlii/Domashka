#include <iostream>

void main() {
    setlocale(LC_ALL, "Rus");
    double a, b, c,x,y a1, b1, c1;
    printf("Введите коэффициенты a,b,c первого уравнения:\n");
    scanf_s("%lf %lf %lf", &a, &b, &c);
    printf("Введите коэффициенты a,b,c второго уравнения:\n");
    scanf_s("%lf %lf %lf", &a1, &b1, &c1);
    if (a * b1 - a1 * b != 0) {
        y = (c1 * a - a1 * c) / (b1 * a - a1 * b);
        x = (c1 * b - b1 * c) / (a1 * b - b1 * a);
        printf("x: %.3lf, y: %.3lf", x, y);
    }
    else {
        if (a * b1 == b * a1 && c == c1) {
            printf("МНОГО");
        }
        if (a * b1 == b * a1 && c != c1) {
            printf("НЕТ");
        }
    } 
}
