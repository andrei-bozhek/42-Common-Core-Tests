#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("expected: Hello\nft: ");
	fflush(stdout);
	ft_putstr_fd("Hello", 1);
	printf("\n");
	return (0);
}
