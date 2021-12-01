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
			l++;
			i++;
			c =0;
		}
		s1[l][c] = s[i];
		i++;
		c++;
	}
	puts(*s1);
	for(int g = 0, f=0;g <= l;g++, f++)
	{
		printf("%s", *s1);
	}
 }
