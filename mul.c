#include "monty.h"
/**
 * f_mul - multiplies the 1st  two elements of the stack.
 * @head:pointer to the head of stack
 * @counter: line number
 * Return: nothing to  return
*/
void f_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	swp = h->next->n * h->n;
	h->next->n = swp;
	*head = h->next;
	free(h);
}
