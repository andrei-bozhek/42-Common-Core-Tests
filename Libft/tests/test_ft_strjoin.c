#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *result;

	result = ft_strjoin("Hello", " World");
	printf("ft = [%s], expected = [Hello World]\n", result ? result : "NULL");
	free(result);
	result = ft_strjoin("", "Tokyo");
	printf("ft = [%s], expected = [Tokyo]\n", result ? result : "NULL");
	free(result);
	return (0);
}
