#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
int main() // нихуя не робит! Ебанный русский язык!!!!1
{
	setlocale(LC_ALL, "Rus");
	char s[100];
	char del[100];
	int i = 0, c = 0, l =0, k = 0;
	char *k1;
	char glas[] = "ауоыэяюёие";
	printf("Введите строку: ");
	fgets(s, 80, stdin);
	while(s[i] != '\0') 
	{
		while(glas[l] != '\0')
		{
			if(s[i] == glass[l])
				c++;
			l++;
		}
		l = 0;
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'  )
			c++;
		i++;
	}
	printf("Количество гласных: %d", c);
}
