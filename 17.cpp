#include <stdio.h>
int main()
{
	char s[100];
	int i = 0;

	printf("Введите строку: ");
	gets_s(s);
	while(s[i] != '\0') 
	{
		printf("%c", s[i]);
		i++;
		if(s[i] == ' ')
		{
			printf("\n");
			i++;
			while(s[i] == ' ')
				i++;
		}
	}
}
