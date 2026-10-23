#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("expected: -2147483648\nft: ");
	fflush(stdout);
	ft_putnbr_fd(-2147483647 - 1, 1);
	printf("\n");
	return (0);
}
