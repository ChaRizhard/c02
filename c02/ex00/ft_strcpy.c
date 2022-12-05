#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
/*
int	main(void)
{
	char str1[13] = "FirstString";
	char str2[13] = "SecondString";

	printf("str1 before: %s\n", str1);
	printf("str2 before: %s\n", str2);
	ft_strcpy(str1, str2);
	printf("\nstr1 after: %s\n", str1);
	printf("str2 after: %s\n", str2);
	return(0);
}
*/
