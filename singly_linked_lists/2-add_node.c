#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node in list_t list
 * @head: head pointer of the list
 * @str: string
 * Return: address of the new element, or NULL on failure
 */


list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int len = 0;

if (head == NULL)
return (NULL);

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

if (str != NULL)
{
node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}
while (str[len] != '\0')
len++;
}
else
{
node->str = NULL;
}

node->len = len;
node->next = *head;
*head = node;

return (node);
}
