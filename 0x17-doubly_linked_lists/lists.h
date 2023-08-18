#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s {
  struct dlistint_s *prev;
  int n;
  struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int idx);
dlistint_t *add_dnodeint_end(dlistint_t **head, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int n);
void free_dlistint(dlistint_t *head);
void reverse_list_node(dlistint_t **head);
