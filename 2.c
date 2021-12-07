#include <iostream>
#include <math.h>
//задача 2

void main() {
setlocale (LC_ALL, "Rus");
int i, n, l = 1;
float z, r, o, z1;
printf("введите число:");
scanf_s("%f", &z);
printf("введите степень:");
scanf_s("%d", &n);
if (n <= 0)
return;
r = z + 1;
o = z + 1;
z1 = z;
for (i = 2; i <= n; i++) {
while (l != i)
{
z1 = z1 * z;
l++;
}
o = o * (r + z1);
r = r + z1;
}

printf ("ответ:%.3f", p);
