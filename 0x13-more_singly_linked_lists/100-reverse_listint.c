#include "lists.h"
/**
 * reverse_listint -reverse linked lists
 * @head: pointer to head pointer
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	/* account for no ptr and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* iterate thorugh list to reverse linking */
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head) = prev;

	return (*head);
}
