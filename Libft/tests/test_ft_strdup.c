#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *result;

	result = ft_strdup("Hello");
	printf("ft = [%s], expected = [Hello]\n", result ? result : "NULL");
	free(result);
	result = ft_strdup("");
	printf("ft = [%s], expected = []\n", result ? result : "NULL");
	free(result);
	return (0);
}
