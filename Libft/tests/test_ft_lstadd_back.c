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
	t_list *node;

	list = ft_lstnew("Hello");
	if (!list)
		return (1);
	node = ft_lstnew("World");
	if (!node)
	{
		free(list);
		return (1);
	}
	ft_lstadd_back(&list, node);
	printf("expected: Hello World\nft: ");
	ft_lstiter(list, print_content);
	printf("\n");
	while (list)
	{
		t_list *next = list->next;
		free(list);
		list = next;
	}
	return (0);
}
