#include "../libft.h"
#include <stdio.h>

static void upper(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}

int main(void)
{
	char text[] = "Hello";

	ft_striteri(text, upper);
	printf("ft = [%s], expected = [HELLO]\n", text);
	return (0);
}
