#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
int main() 
{
	setlocale(LC_ALL, "Rus");
	char s[100];
	int i = 0, c = 0, d;

	printf("Введите строку: ");
	gets_s(s);
	for (int i1 = 0, l; s[i1] != '\0'; i1++)
	{
		if (s[i1 + 1] == ' ' || s[i1 + 1] == ',')
		{
			l = i1 + 1;
			while (s[l])
			{
				s[l] = s[l + 1];
				l++;
			}
			i1--;
		}
		s[i1] = (char)tolower(s[i1]);
	}
	c = strlen(s) - 1;
	d = c;
	while (s[i] == s[c])
	{
		i++;
		c--;
		if (i == d)
		{
			printf("Это паллиндром!!!");
			return 0;
		}
	}
	printf("Это не паллиндром:(");
}
