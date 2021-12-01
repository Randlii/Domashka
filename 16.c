#include <stdio.h>
#include <ctype.h>
int main()
{
	char s[100];
	char del[100];
	int i = 0, c = 0;

	printf("Работает только с англ алфавитом! \n Введите строку: ");
	fgets(s, 80, stdin);
	while(s[i] != '\0') 
	{
		s[i] = (char)tolower((int)s[i]);
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y'  )
			c++;
		i++;
	}
	printf("Количество гласных: %d", c);

}
