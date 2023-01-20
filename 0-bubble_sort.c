#include "sort.h"

/**
 * bubble_sort - Function to perform bubble sort
 * @array: The array to swap
 * @size: array size (len)
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
    size_t iterator = 0, reverser = 0;
    int temp = 0, counter = 1;

    for(reverser = 0; reverser < size && counter != 0; reverser++)
    {
        counter = 0;
        for(iterator = 0; iterator < size - 1; iterator++)
        {
            if(array[iterator] > array[iterator + 1])
            {
                counter++;
                temp = array[iterator];
                array[iterator] = array[iterator + 1];
                array[iterator + 1] = temp;
                print_array(array, size);
            }
        }
    }
}
