#include "monty.h"
/**
 * f_queue - prints the top elements of stack
 * @head: pointer to stack head
 * @counter: line number
 * Return: none
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - adds a node to the tail stack queue
 * @n: new value 
 * @head: pointer to the head of the stack
 * Return: none
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *swp;

	swp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (swp)
	{
		while (swp->next)
			swp = swp->next;
	}
	if (!swp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		swp->next = new_node;
		new_node->prev = swp;
	}
}
