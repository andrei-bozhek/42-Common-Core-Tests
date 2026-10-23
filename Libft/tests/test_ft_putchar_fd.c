#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("expected: A\nft: ");
	fflush(stdout);
	ft_putchar_fd('A', 1);
	printf("\n");
	return (0);
}
