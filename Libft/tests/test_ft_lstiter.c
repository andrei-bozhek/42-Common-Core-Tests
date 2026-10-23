#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

static void print_content(void *content)
{
	printf("[%s] ", (char *)content);
}

int main(void)
{
	t_list *list;

	list = ft_lstnew(ft_strdup("Hello"));
	if (!list)
		return (1);
	printf("expected: [Hello]\nft: ");
	ft_lstiter(list, print_content);
	printf("\n");
	ft_lstclear(&list, free);
	return (0);
}
