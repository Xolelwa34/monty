#include "monty.h"
/**
 * f_pall - function that is used to print the stack
 * @head: head pointer to stack
 * @counter: not used
 * Return: thing to return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
