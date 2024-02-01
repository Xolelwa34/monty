#include "monty.h"
/**
  *f_sub- subtract elements of the stack
  *@head: pointer to the head stack
  *@counter: line number
  *Return: nothing to return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *swp;
	int subt, nod;

	swp = *head;
	for (nod = 0; swp != NULL; nod++)
		swp = swp->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	swp = *head;
	subt = swp->next->n - swp->n;
	swp->next->n = subt;
	*head = swp->next;
	free(swp);
}
