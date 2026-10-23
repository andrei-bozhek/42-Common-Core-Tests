#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char **words;
	int i;

	words = ft_split("  Hello   World  Tokyo ", ' ');
	if (!words)
		return (1);
	printf("expected: [Hello] [World] [Tokyo]\n");
	for (i = 0; words[i]; i++)
	{
		printf("ft word %d: [%s]\n", i, words[i]);
		free(words[i]);
	}
	printf("end: NULL\n");
	free(words);
	return (0);
}
