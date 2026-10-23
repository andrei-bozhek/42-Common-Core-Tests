#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char dst[10] = "Hello";
	size_t len;

	len = ft_strlcat(dst, " World", sizeof(dst));
	printf("ft = [%s], length = %zu\nexpected = [Hello Wor], length = 11\n", dst, len);
	return (0);
}
