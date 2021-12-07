#include <iostream>
#include<math.h>

int factorial(int n)
{
	int z = 1;
	for (int i = 1; i <= n; i++)
	z = i * z;
	return z;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int eps; 
	int x; 
	int z = 1;
	float s = 0;
	printf("введите eps: ");
	scanf_s("%d", &eps);
	printf("введите х: ");
	scanf_s("%d", &x);
	if (eps <= 0)
		return 0;
	int zn = 1; 
	int x1 = х; 
	int t = x1;
	float dr = x;
	while (dr > eps)
	{
		s = s + z * dr;
		z = -z;
		zn = zn+ 2;
		t = t * x1 * x1;
		dr = t / factorial(zn);

	}
	printf("%.3f", s);
}
