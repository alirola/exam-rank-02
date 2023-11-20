#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	int lenght;
	char *strcpy;

	i = 0;
	lenght = 0;

	while (src[lenght])
		lenght++;
	strcpy = malloc(lenght + 1);
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
