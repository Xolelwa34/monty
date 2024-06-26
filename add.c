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
	int len = 0, num;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	num = h->n + h->next->n;
	h->next->n = num;
	*head = h->next;
	free(h);
}

