#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[12] = "abcdef";
	char b[12] = "abcdef";
	size_t i;

	ft_memmove(a + 2, a, 4);
	memmove(b + 2, b, 4);
	for (i = 0; i < 7; i++)
		printf("byte %zu: ft = %u, original = %u\n", i, (unsigned char)a[i], (unsigned char)b[i]);
	return (0);
}
