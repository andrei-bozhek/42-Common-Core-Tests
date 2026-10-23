#include "../libft.h"
#include <stdio.h>

int main(void)
{
	char dst[5];
	size_t len;

	len = ft_strlcpy(dst, "Hello World", sizeof(dst));
	printf("ft = [%s], length = %zu\nexpected = [Hell], length = 11\n", dst, len);
	len = ft_strlcpy(dst, "abc", 0);
	printf("size 0: ft = [%s], length = %zu\nexpected = [Hell], length = 3\n", dst, len);
	return (0);
}
