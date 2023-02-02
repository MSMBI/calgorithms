#include <stdio.h>
#include <stdlib.h>

int *two_sum(int *arr, int size, int target, int *return_size)
{
    *return_size = 2;
    int *indexes = malloc(*return_size * sizeof(*indexes));

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[j] + arr[i] == target)
            {
                indexes[0] = i;
                indexes[1] = j;
            }
        }
    }

    return indexes;
}

int main()
{
    int array[] = { -3, -2, 4};
    int size_arr = sizeof(array)/sizeof(array[0]);

    int *indexes;
    int returnsize = 2;
    int target = -5;
    indexes = two_sum(array, size_arr, target, &returnsize);

    for(int k = 0; k < 2; k++) printf("%d, ", indexes[k]);
    return 0;
}