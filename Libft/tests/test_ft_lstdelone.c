#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	t_list *list;

	list = ft_lstnew(ft_strdup("Hello"));
	if (!list)
		return (1);
	ft_lstdelone(list, free);
	printf("node and content freed\n");
	return (0);
}
