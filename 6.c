#include <stdio.h>
int main()
{
	int x1, x2, y1, y2, x11,x22, y11, y22, a, s = 0;
	printf("Введите х1 и у1 координаты первого крокодила ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	printf("Введите х2 и у2 координаты второго крокодила ");
	scanf("%d", &x2);
	scanf("%d", &y2);
	printf("Введите размер бассейна: ");
	scanf("%d", &a);

	
	if(x1 > a || x2 > a || y1 > a || y2 > a)
	  {
		printf("Коркодил не в бассене");
		return 0;
	}
	if (x1 < 0 || x2 < 0 || y1 < 0 || y2 < 0 || a <= 0) {
		printf("Введите положительное значение");
		return 0;
	}
	if(x1 <= x2)
	{
		x11 = x1;
		x22 = x2;
	}
	else
	{
		x11 = x2;
		x22 = x1;
	}
	if(y1 <= y2)
	{
		y11 = y1;
		y22 = y2;
	}
	else
	{
		y11 = y2;
		y22 = y1;
	}

	while(x11 != x22)
	{
		x11++;
		s++;
	}
	while(y11 != y22)
	{
		y11++;
		s++;
	}
	printf("Растояние между коркодилами %d", s);
}
