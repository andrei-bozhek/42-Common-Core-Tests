#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *numbers;
	int i;

	numbers = ft_calloc(4, sizeof(int));
	if (!numbers)
		return (1);
	for (i = 0; i < 4; i++)
		printf("number %d: ft = %d, expected = 0\n", 
			i, numbers[i]);
	free(numbers);
	return (0);
}
