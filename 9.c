#include <stdio.h>
int main() {
    printf("введите число n: \n");
    int n, z = 1, a = 1,l=0;
        scanf("%d", &n);
        if (n < 0) {
            printf("Введите положительное число");
            return 0;
        }
        if (n == 0 || n == 1)
            printf("Ближайшее число Фибоначчи: %d", n);
       	while (l < n) {
            l = a + z;
            z = a;
            a = l;
        }
        printf("Ближайшее число Фибоначчи: %d", l);
}
