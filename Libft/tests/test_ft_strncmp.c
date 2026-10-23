#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("[abc] vs [abc], 3: ft = %d, original = %d\n", ft_strncmp("abc", "abc", 3), strncmp("abc", "abc", 3));
	printf("[abc] vs [abd], 3: ft = %d, original = %d\n", ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	printf("[abc] vs [abd], 2: ft = %d, original = %d\n", ft_strncmp("abc", "abd", 2), strncmp("abc", "abd", 2));
	printf("[b] vs [a], 1: ft = %d, original = %d\n", ft_strncmp("b", "a", 1), strncmp("b", "a", 1));
	return (0);
}
