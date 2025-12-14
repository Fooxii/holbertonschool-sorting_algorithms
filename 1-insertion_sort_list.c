#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of intergers in ascending order using the insertion sort algorithm
 * @list: pointer to the head of the list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
listint_t *current;
listint_t *temp;

if (!list || !*list || !(*list)->next)
return;

current = (*list)->next;

while (current)
{
temp = current;
current = current->next;

while (temp->prev && temp->n < temp->prev->n)
{

if (temp->next)
temp->next->prev = temp->prev;

temp->prev->next = temp->next;

temp->next = temp->prev;
temp->prev = temp->prev->prev;

if (temp->prev)
temp->prev->next = temp;
else
*list = temp;

temp->next->prev = temp;

print_list(*list);
}
}
}
