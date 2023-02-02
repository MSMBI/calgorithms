#include <stdio.h>

int * sort_arr_into_asc_order(int *arr, int arr_size)
{
    int temp = 0;

    for(int i = 0; i<arr_size; i++)
    {
        for(int j = i; j<arr_size; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int arr[] = {1, 9, 5, -2, 3, -54};

    int arr_size = sizeof(arr)/ sizeof(arr[0]);

    int *sorted_array;
    sorted_array = sort_arr_into_asc_order(arr, arr_size);

    for(int k = 0; k < arr_size; k++) printf("%d,", sorted_array[k]);

    return 0;
}