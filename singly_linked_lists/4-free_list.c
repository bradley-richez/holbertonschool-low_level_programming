#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list_t list
 * @head: first node pointer
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
