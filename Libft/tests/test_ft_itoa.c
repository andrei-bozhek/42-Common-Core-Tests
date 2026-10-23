#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	char *result;

	result = ft_itoa(42);
	printf("ft = [%s], expected = [42]\n", 
		result ? result : "NULL");
	free(result);
	result = ft_itoa(-123);
	printf("ft = [%s], expected = [-123]\n", 
		result ? result : "NULL");
	free(result);
	result = ft_itoa(0);
	printf("ft = [%s], expected = [0]\n", 
		result ? result : "NULL");
	free(result);
	result = ft_itoa(INT_MIN);
	printf("ft = [%s], expected = [-2147483648]\n", 
		result ? result : "NULL");
	free(result);
	return (0);
}
