#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, i;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

i = left + (right - left) / 2;

if (array[i] == value)
return (i);

if (array[i] < value)
left = i + 1;
else
right = i - 1;
}
return (-1);
}
