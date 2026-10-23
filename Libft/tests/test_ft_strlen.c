#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("[Hello]: ft = %zu, original = %zu\n", ft_strlen("Hello"), strlen("Hello"));
	printf("[]: ft = %zu, original = %zu\n", ft_strlen(""), strlen(""));
	return (0);
}
