#include "search_algos.h"
#include <math.h>


/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;
    
    size_t step, prev, i, curr;
    step = sqrt(size);
    prev = 0;
    curr = step;

    printf("Value checked array[%ld] = [%d]\n", array[curr], curr);


    while (curr < size && array[curr] < value) {
        prev = curr;
        curr += step;
        printf("Comparing value [%ld] = [%d]\n", array[curr], curr);
    }


    for (i = prev; i <= curr && i < size; i++) {
        printf("Value found between indexes [%ld] and [%ld]\n", array[i], i);
        if (array[i] == value)
            return i;
    }

    return -1;
}
