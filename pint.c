#include "monty.h"
/**
 * f_pint - prints str at the top of a stack
 * @head: head pointer to stack
 * @counter: line number
 * Return: nothing to return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
