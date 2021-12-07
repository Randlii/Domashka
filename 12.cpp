#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void base1(int nbr, int base_type)
{
	int	nbr_final[100];
	int	i;
	char base[] = "0123456789ABCDEF";

	i = 0;
	if ((base_type))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			printf("-");
		}
		while (nbr)
		{
			nbr_final[i] = nbr % base_type;
			nbr = nbr / base_type;
			i++;
		}
		while (--i >= 0)
			printf("%c",base[nbr_final[i]]);
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	int s,s1;
	printf("Введите число: "); 
	scanf("%d", &s);
	printf("Введите систему исчисления: ");
	scanf("%d", &s1);
	base1(s, s1);
}
