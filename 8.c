#include<iostream>
void main() {
setlocale(LC_ALL, "Rus");
int n;
int* A;
printf("введите количество элементов в массиве:");
scanf_s("%d", &n);
if (n <= 0) {
printf("введите положительное число");
return;
}
A = new int[n];
if (A == NULL)
printf("ошибка");
printf("введите элементы массива:\n");
for (int i = 0; i < n; i++)
scanf_s("%d", &A[i]);
int t = 0;
for (int i = 0; i < n; i++)
{
for (int j = i + 1; j < n; j++)
{
if (A[i] - A[j] == A[i + 1] - A[j + 1])
printf("да");
else {
printf("нет");
return;
}

}
}

delete[] A;
}
