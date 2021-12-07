#include <iostream>
#include<math.h>

int factorial(int n)
{
	int z = 1;
	for (int i = 1; i <= n; i++)
	z = i * z;
	return z;
}

void main() {
	setlocale(LC_ALL, "Rus");
	int eps, x, z = 1;
	float s = 0;
	printf("введите eps: ");
	scanf_s("%d", &eps);
	printf("введите х: ");
	scanf_s("%d", &x);
	if (eps <= 0)
		return;
	int znam = 1, x1 = х, t = x1;
	float drob = x;
	while (drob > eps)
	{
		s = s + z * drob;
		z = -z;
		znam = znam + 2;
		t = t * x1 * x1;
		drob = t / factorial(znam);

	}
	printf("%.3f", s);
}
