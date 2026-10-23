#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char data[] = "banana";
	char *result;

	result = ft_memchr(data, 'n', 6);
	printf("find n: ft offset = %td, expected = 2\n", result - data);
	result = ft_memchr(data, 'n', 2);
	printf("find n in 2 bytes: ft = %s, expected = NULL\n", result ? "found" : "NULL");
	return (0);
}
