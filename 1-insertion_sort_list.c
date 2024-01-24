#include "sort.h"

/**
 * swap - swaps two list elements
 * @A: pointer1
 * @B: pointer2
 */
void swap(listint_t *A, listint_t *B)
{
	A->next = B->next;
	if (B->next)
		B->next->prev = A;
	B->prev = A->prev;
	B->next = A;
	if (A->prev)
		A->prev->next = B;
	A->prev = B;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 *
 * @list: The list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *A = NULL, *B = NULL, *cur = *list;

	if (cur == NULL || cur->next == NULL)
		return;
	while (cur)
	{
		A = cur;
		B = cur->next;
		cur = cur->next;
		while (A && A->n > B->n)
		{
			swap(A, B);
			if (!B->prev)
				*list = B;
			A = B->prev;
			print_list(*list);
		}
	}
}
