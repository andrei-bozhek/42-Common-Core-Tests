#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char *result;

	result = ft_strnstr("Hello World", "World", 11);
	printf("find [World], len 11: ft = [%s], expected = [World]\n", result ? result : "NULL");
	result = ft_strnstr("Hello World", "World", 10);
	printf("find [World], len 10: ft = [%s], expected = [NULL]\n", result ? result : "NULL");
	result = ft_strnstr("Hello World", "", 0);
	printf("find [], len 0: ft = [%s], expected = [Hello World]\n", result ? result : "NULL");
	result = ft_strnstr("Hello World", "Tokyo", 11);
	printf("find [Tokyo], len 11: ft = [%s], expected = [NULL]\n", result ? result : "NULL");
	return (0);
}
