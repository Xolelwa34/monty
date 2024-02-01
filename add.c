#include "monty.h"
/**
 * f_add - adds the 1st two elements of the stack
 * @head: pointer to head stack
 * @counter: line number
 * Return: nothing to return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, swp;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	swp = h->n + h->next->n;
	h->next->n =swp;
	*head = h->next;
	free(h);
}
