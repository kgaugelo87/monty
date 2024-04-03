#include "monty.h"

/**
 * pint - the value at the top of the stack
 * @head: our head stack
 * @number: our stack number
 * Return: stack and if stack empty print error
 *
 */

void pint(stack_t **head, unsigned int number)
{
	if (arguments->head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", arguments->head->n);
}
