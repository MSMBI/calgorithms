#include <stdio.h>
#include <stdlib.h>

int * decimal_to_binary(int decimal_num, int *length)
{
     int binary_buffer[1048];

    int remainder = 0;
    int i = 0;

    while(decimal_num > 0)
    {
        remainder = decimal_num % 2;

        switch (remainder)
        {
            case 0: binary_buffer[i] = 0; break;
            case 1: binary_buffer[i] = 1; break;
            default: printf("Error, character not supported"); break;
        }

        decimal_num/=2;
        i++;
    }

    int *reversed_binary_buffer;
    reversed_binary_buffer = malloc(i*sizeof(int));

    for (int j = i - 1; j >=0; j--)
    {
        reversed_binary_buffer[i - j - 1] = binary_buffer[j];
    }

    *length = i;
    return reversed_binary_buffer;
}

int main()
{
    int decimal_num = 155;
    int length;

    int *decimal_buff;
    decimal_buff = malloc(1048*sizeof(int));
    decimal_buff = decimal_to_binary(decimal_num, &length);
    
    for(int k = 0; k < length; k++)
    {
        printf("%d", decimal_buff[k]);
    }

    return 0;
}