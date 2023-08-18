#include "lists.h"

int main(void)
{
	/* list_node *head = malloc(sizeof(list_node)); */
	dlistint_t *head = NULL;
	int i;

	i = 0;
	while (i < 5)
	{
		add_dnodeint_end(&head, i);
		i++;
	}
	add_dnodeint(&head, -1);
	add_dnodeint_end(&head, -1);
	insert_dnodeint_at_index(&head, 3, 69);
	delete_dnodeint_at_index(&head, 7);
	print_dlistint(head);
	reverse_list_node(&head);
	print_dlistint(head);
	free_dlistint(head);
	return (0);
}

