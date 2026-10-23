#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

static char upper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int main(void)
{
	char *result;

	result = ft_strmapi("Hello", upper);
	printf("ft = [%s], expected = [HELLO]\n", result ? result : "NULL");
	free(result);
	return (0);
}
