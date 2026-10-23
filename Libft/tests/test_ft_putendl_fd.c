#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("expected: Hello followed by newline\nft: ");
	fflush(stdout);
	ft_putendl_fd("Hello", 1);
	printf("\n");
	return (0);
}
