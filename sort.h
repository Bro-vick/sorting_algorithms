#ifndef __SORT__
#define __SORT__
#include <stdlib.h>

/**
 * struct listint_s - Double linked list node
 *
 * @n: Integer stored in the node
 * @prev: pointer to the preevious element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*======================================================================*/
/*=================         Printing Algoritms        ==================*/
/*======================================================================*/

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*======================================================================*/
/*=================          sorting Algoritms        ==================*/
/*======================================================================*/

void bubble_sort(int *array,size_t size);
void insertion_sort_list(listint_t **list);

#endif  /* __SORT__ */
