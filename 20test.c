#include <stdio.h>
   
int main()
{
	char s[100];
	char s1[100][100];
	int i = 0, c = 0, l = 0, n1, n2,check;

	printf("Введите строку: ");
	fgets(s, 80, stdin);
	printf("Введите первый номер слова ");
	scanf("%d", &n1);
	printf("Введите второй номер слова: ");
	scanf("%d", &n2);
	while(s[i] != '\0') 
	{
		if(s[i] == ' ')
		{
			
			s1[l][c] = '\0';
			l++;
			i++;
			c =0;
		}
		s1[l][c] = s[i];
		i++;
		c++;
	}
	s1[l][c] = '\0';
	puts(*s1);
	for(int g = 0;g <= l;g++)
	{
		if(g == n1)
		{
			printf("%s ", s1[n2]);
			g++;
		}
		if(g == n2)
		{
			printf("%s ", s1[n1]);
			g++;
		}
		printf("%s ", s1[g]);
	}
 }
