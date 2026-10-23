#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("0: %d (expected 1)\n", ft_isdigit('0'));
	printf("9: %d (expected 1)\n", ft_isdigit('9'));
	printf("A: %d (expected 0)\n", ft_isdigit('A'));
	printf("space: %d (expected 0)\n", ft_isdigit(' '));
	return (0);
}
