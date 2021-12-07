#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s,c = 0, k = 0;
	int *A;
	printf("Введите величину массива:\n ");
	scanf("%d", &s);
	A = malloc(s * sizeof(int));
	printf("Введите массив: ");
	for(int i = 0; i < s; i++)
		scanf("%d",&A[i]);
	for(int l = 0; l < s; l++)
	{
		for(int l1 = 0; l1 < s; l1++)
		{
			if(A[l] == A[l1] && l != l1)
				k++;
		}
		if(k == 0)
		{
			c++;
		}
		k = 0;
	}
	printf("различных элементов%d", c);
	free(A);
}
