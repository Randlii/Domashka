#include <iostream>
#include <math.h>
//ЗАДАНИЕ 7
int main() {
   	setlocale(LC_ALL, "Rus");
   	double x, y, r,c=0;
   	printf("Введите радиус \n");
   	scanf_s("%lf", &r);
   	if (r <= 0) {
         	printf("введите положительное значение!");
         	return 0;
   	}
   	printf("Введите координаты центра (x,y) ");
   	scanf_s("%lf %lf", &x, &y);
   	for (double i=x - r;i<= x + r;i=i+1) {
         	for (double k = y - r; k <= y + r; k=k+1) {
                	if (fabs(x+k) <= sqrt(r*r-(y+i)*(y+i))) {
                      	c++;
                	}
         	}
   	}
   	printf("целочисленных точек внутри круга: %.0lf",c);
   	return 0;
}
