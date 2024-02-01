#include "monty.h"
/**
 * f_mod - computes modulos of the stack
 * pointer to the element of the stack 
 * @head: pointer to the head of stack
 * @counter: line number
 * Return: none 
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	swp = h->next->n % h->n;
	h->next->n = swp;
	*head = h->next;
	free(h);
}
