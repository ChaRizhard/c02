#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[n] = src[n];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main()
{
	char *str1 = "I like chocolate icecream";
	char *str2 = "I like chocolate";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strncpy(&str1, &str2, 5);
	printf("\nstr1: %s\n", str1);
	return(0);
}

