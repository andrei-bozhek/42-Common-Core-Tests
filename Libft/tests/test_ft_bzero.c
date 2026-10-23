#include "../libft.h"
#include <stdio.h>
#include <strings.h>

int main(void)
{
	char a[12] = "abcdef";
	char b[12] = "abcdef";
	size_t i;

	ft_bzero(a, 3);
	bzero(b, 3);
	for (i = 0; i < 7; i++)
		printf("byte %zu: ft = %u, original = %u\n", i, 
			(unsigned char)a[i], (unsigned char)b[i]);
	return (0);
}
