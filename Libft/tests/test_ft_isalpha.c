#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("A: %d (expected 1)\n", ft_isalpha('A'));
	printf("z: %d (expected 1)\n", ft_isalpha('z'));
	printf("0: %d (expected 0)\n", ft_isalpha('0'));
	printf("space: %d (expected 0)\n", ft_isalpha(' '));
	return (0);
}
