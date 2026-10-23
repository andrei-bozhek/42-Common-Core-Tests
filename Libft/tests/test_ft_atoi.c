#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("[42]: ft = %d, original = %d\n", 
		ft_atoi("42"), atoi("42"));
	printf("[  -123abc]: ft = %d, original = %d\n", 
		ft_atoi("  -123abc"), atoi("  -123abc"));
	printf("[+7]: ft = %d, original = %d\n", 
		ft_atoi("+7"), atoi("+7"));
	printf("[abc]: ft = %d, original = %d\n", 
		ft_atoi("abc"), atoi("abc"));
	printf("[0]: ft = %d, original = %d\n", 
		ft_atoi("0"), atoi("0"));
	return (0);
}
