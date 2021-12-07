#include <stdio.h>
#include <iostream>

int main() 
{
	setlocale(LC_ALL, "Rus");
	char s[100];
	char del[100];
	int i = 0, c = 0, d = 0, l = 0;

	printf("Введите строку: ");
	fgets(s, 100,stdin);
	printf("Введите слово которое нужно удалить: ");
	fgets(del, 100, stdin);
	while (s[i] != '\0') {
		while (s[i] == del[c])
		{
			if (s[i + 1] == ' ' || s[i + 1] == '\0' || s[i + 1] == '\n')
			{
				d = i - c - 1;
				l = i;
				for (int d = i - c - 1; s[l] != '\0';)
					s[d++] = s[++l];
				s[l] = '\0';
				i = 0;
			}
			i++;
			c++;
		}
		c = 0;
		i++;

	}
	puts(s);
	printf("\nСлово которое удалили: ");
	puts(del);
}
