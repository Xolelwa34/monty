#include "monty.h"
/**
 * f_pall - function that is used to print the stack
 * @head: head pointer to stack
 * @counter: not used
 * Return: thing to return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *s;
	(void)counter;

	s = *head;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
