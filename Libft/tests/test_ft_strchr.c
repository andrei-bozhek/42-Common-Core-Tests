#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *result;

	result = ft_strchr("banana", 'a');
	printf("find a: ft = [%s], original = [%s]\n", result ? result : "NULL", strchr("banana", 'a'));
	result = ft_strchr("banana", 'n');
	printf("find n: ft = [%s], original = [%s]\n", result ? result : "NULL", strchr("banana", 'n'));
	result = ft_strchr("banana", 'x');
	printf("find x: ft = [%s], expected = [NULL]\n", result ? result : "NULL");
	return (0);
}
