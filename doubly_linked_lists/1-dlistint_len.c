#include"lists.h"

size_t dlistint_len(const dlistint_t *h);
{
size_t longueur = 0;
while (h)
{
	longueur++;
	h = h->next;
}
return longueur;
}
