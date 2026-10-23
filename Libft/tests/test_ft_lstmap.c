#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

static void print_content(void *content)
{
	printf("[%s] ", (char *)content);
}

static void *copy_content(void *content)
{
	return (ft_strdup(content));
}

int main(void)
{
	t_list *list;
	t_list *copy;

	list = ft_lstnew(ft_strdup("Hello"));
	if (!list)
		return (1);
	copy = ft_lstmap(list, copy_content, free);
	if (!copy)
	{
		ft_lstclear(&list, free);
		return (1);
	}
	printf("expected copy: [Hello]\nft: ");
	ft_lstiter(copy, print_content);
	printf("\nindependent content: %d, expected = 1\n", copy->content != list->content);
	ft_lstclear(&copy, free);
	ft_lstclear(&list, free);
	return (0);
}
