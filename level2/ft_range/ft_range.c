#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int size;
	int *range;
	int i;

	i = 0;
	size = start - end;
	if (size < 0)
		size = size * -1;
	range = malloc(sizeof(int) * (size + 1));
	range[i] = start;
	while(range[i] != end)
	{
		if (start <= end)
			start++;
		else
			start--;
		i++;
		range[i] = start;
	
	}
	return(range);
}
