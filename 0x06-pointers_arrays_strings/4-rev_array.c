#include "main.h"

/**
 * reverse_array - function that reverses the content of array of integers
 * @a: an array of integers
 * @n: number of elements to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
int *p, i, aux, k;
p = a;
for (i = 1; i < n; i++)
{
p++;
}
for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}