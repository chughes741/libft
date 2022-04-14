#include "libft.h"

void delete(void *var) {
	(void)var;
	return;
}

int main() {
	t_list *head;
	t_list *temp;

	int *lc1 = (int *)malloc(sizeof(int));
	int *lc2 = (int *)malloc(sizeof(int));
	int *lc3 = (int *)malloc(sizeof(int));
	int *lc4 = (int *)malloc(sizeof(int));
	int *lc5 = (int *)malloc(sizeof(int));

	*lc1 = 10;
	*lc2 = 20;
	*lc3 = 30;
	*lc4 = 40;
	*lc5 = 50;

	head = ft_lstnew(lc1);
	printf("\nlstnew: First node contents: %i\n", *((int *)head->content));
	printf("List size: %i\n", ft_lstsize(head));

	ft_lstadd_front(&head, ft_lstnew(lc2));
	printf("addfront: New first node contents: %i\n", *((int *)head->content));
	printf("List size: %i\n", ft_lstsize(head));

	ft_lstadd_back(&head, ft_lstnew(lc3));
	printf("addback: Last node contents: %i\n", *((int *)ft_lstlast(head)->content));
	printf("List size: %i\n", ft_lstsize(head));

	ft_lstadd_back(&head, ft_lstnew(lc4));
	// printf("Last node contents: %i\n", *((int *)ft_lstlast(head)->content));
	// printf("List size: %i\n\n", ft_lstsize(head));

	ft_lstadd_back(&head, ft_lstnew(lc5));
	// printf("Last node contents: %i\n", *((int *)ft_lstlast(head)->content));
	// printf("List size: %i\n\n", ft_lstsize(head));

	temp = head;
	head = head->next;
	ft_lstdelone(temp, delete);
	printf("delone: First node contents: %i\n", *((int *)head->content));
	printf("List size: %i\n", ft_lstsize(head));

	ft_lstadd_front(&head, ft_lstnew(lc2));
	// printf("New first node contents: %i\n", *((int *)head->content));
	printf("Added another node\nList size: %i\n", ft_lstsize(head));

	ft_lstclear(&head, delete);

	return 0;
}