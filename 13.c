#include <stdio.h>
#include <iostream>
using namespace std;
void swapk(int* a, int i, int j)
{
	int s = a[i];
	a[i] = a[j];
	a[j] = s;
}
int factorial(int n)
{
	int z = 1;
	for (int i = 1; i <= n; i++)
	z = i * z;
	return z;
}


int main()
{
	int x, n, l = 1, xl, k;
	int* A;
	int* A1;

	printf("vvedite N: ");
	scanf("%d", &n);
	A = new int[n];
	A1 = new int[n];
	for (int i = 0, c = 1; i < n; i++, c++)
		A[i] = c;
	x = factorial(n);
	xl = x/n;
	for(int i = 0; i < n;i++)
		A1[i] = A[i];
	for (int d = 0; d < n; d++)
			printf("%dh\n", A1[d]);
	for (int i = 0, c =1; i <= x -1; i++, c++)
	{
		if(n - 1 == c)
			c = 1;
		if(xl == 0)
		{
			for(int i = 0; i < n;i++)
				A[i] = A1[i];
			swapk(A, 0,l);
			l++;
			xl =(x/n);
		}
		else
			swapk(A,c, c+1);
		xl--;

		for (int d = 0; d < n; d++)
			printf("%d", A[d]);
		printf("\n");
	}
}
