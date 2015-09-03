#include <stdio.h>

/**
 * Parameters: array, it's size and number 'x'
 * Return: position of element greater than 'x' or 
 *         -1 if there are no elements greater than 'x'
 */
int bsearch (const int *array, int size, int x) {
    
    int left = 0, right = size, mid;
    
    while (left < right) {
        mid = left + (right-left) / 2;
        if (array[mid] <= x) left = mid + 1;
        else right = mid;
    }
    return (left >= size ? -1 : left);
}

int main () {
    int i, m[] = {4, 8, 15, 16, 23, 42};
    
    for (i=1; i<108; ++i)
        printf("bsearch(%d) = %d\n", i, bsearch(m, 6, i));
    
    return 0;
}
