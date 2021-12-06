#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int t;
	int* A;
	printf("Введите величину массива:\n ");
	scanf("%d", &n);
	A = malloc(n * sizeof(int));
	printf("Введите массив: ");
	for(int i = 0; i < n; i++)
		scanf("%d",&A[i]);

    int s =1;
    while(s != 0)
    {
    	s--;
		for (int k = 0; k < n; k++) 
		{
        	if(A[k - 1] > 0 && A[k] <= 0)
        	{
        		t = A[k - 1];
        		A[k - 1] = A[k];
        		A[k] = t;
        		s++;
        	}
        }
        if(s == 0)
        	break;
        else
        	s = 1;
    }
	for (int x = 0; x < n; x++) {
            printf("%d ", A[x]);
    
    }
    free(A);
}

