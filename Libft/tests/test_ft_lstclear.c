#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	t_list *list;

	list = ft_lstnew(ft_strdup("Hello"));
	if (!list)
		return (1);
	ft_lstclear(&list, free);
	printf("ft = %s, expected = NULL\n", list ? "not NULL" : "NULL");
	return (0);
}
