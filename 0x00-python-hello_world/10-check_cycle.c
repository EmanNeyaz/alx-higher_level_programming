#include "lists.h"

/**
 * check_cycle - detect a loop in a linked list
 * @list: the list to check
 * Retur: 1 - true
 */
int check_cycle(listint_t *list)
{
  listint_t *prev, *fwd;

  prev = fwd = list;
  while (prev && fwd && fwd->next)
    {
      prev = prev->next;
      fwd = fwd->next->next;

      if (fwd == prev)
        return (1);
    }
  return (0);
}
