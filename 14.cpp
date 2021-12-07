#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main() 
{
	setlocale(LC_ALL, "Rus");
	int k,n = 0, m = 0, maxk = 0;
	int* A;
	int* B;
	int* C;
	int* D;
	printf("Введите величину массива:\n ");
	scanf_s("%d", &k);
	A = new int[k];
	printf("Введите массив: ");
	for (int i = 0; i < k; i++)
		scanf_s("%d",&A[i]);
	printf("Введите величину массива:\n ");
	scanf_s("%d", &n);
	B = new int[n];
	printf("Введите массив: ");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &B[i]);
	printf("Введите величину массива:\n ");
	scanf_s("%d", &m);
	C = new int[m];
	printf("Введите массив: ");
	for (int i = 0; i < m; i++)
		scanf_s("%d", &C[i]);
	D = new int(k + n + m);
	for (int i = 0; i <= k; i++)
		D[i] = A[i];
	for (int i = 0; i <= (k + n); i++)
		D[i + k] = B[i];
	for (int i = 0; i <= (k + n + m); i++)
		D[i + k + n] = C[i];
	for(int c = 0; c < (k + m + n); c++)
		printf("%d ", D[c]);
	delete[]A;
	delete[]B;
	delete[]C;
}
