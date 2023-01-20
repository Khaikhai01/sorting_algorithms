#include "sort.h"

int recur_swap(int *array, size_t index, size_t next, size_t len)
{
    int temp = 0;
    if(array[index] <= array[next] || next == 0)
    {
        print_array(array, len);
        return (0);
    }
    else
    {
        temp = array[index];
        array[index] = array[next];
        array[next] = temp;
        print_array(array, len);
        recur_swap(array, index - 1, next - 1, len);
    }
    return (1);
}
int main()
{
    int array[] = {3, 5, 7, 2, 1};
    size_t i;
    size_t len = sizeof(array) / sizeof(array[0]);

    for(i = 0; i < len - 1; i++)
    {
        printf("Called swap function for index: %ld\n", i);
        recur_swap(array, i, i + 1, len);
    }
    return 0;
}
