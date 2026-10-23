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

	list = ft_lstnew("Hello");
	if (!list)
		return (1);
	printf("expected: Hello\nft: ");
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
