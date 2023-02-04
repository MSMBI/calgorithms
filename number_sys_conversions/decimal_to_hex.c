#include <stdio.h>
#include <stdlib.h>

char * decimal_to_hex(int decimal_num, int *hex_size)
{
    char hex_buffer[100];

    int remainder;

    int i = 0;
    int length = 0;
    while (decimal_num > 0)
    {
        remainder = decimal_num % 16;
        switch (remainder)
        {
            case 0: hex_buffer[i] = '0'; break;
            case 1: hex_buffer[i] = '1'; break;
            case 2: hex_buffer[i] = '2'; break;
            case 3: hex_buffer[i] = '3'; break;
            case 4: hex_buffer[i] = '4'; break;
            case 5: hex_buffer[i] = '5'; break;
            case 6: hex_buffer[i] = '6'; break;
            case 7: hex_buffer[i] = '7'; break;
            case 8: hex_buffer[i] = '8'; break;
            case 9: hex_buffer[i] = '9'; break;
            case 10: hex_buffer[i] = 'A'; break;
            case 11: hex_buffer[i] = 'B'; break;
            case 12: hex_buffer[i] = 'C'; break;
            case 13: hex_buffer[i] = 'D'; break;
            case 14: hex_buffer[i] = 'E'; break;
            case 15: hex_buffer[i] = 'F'; break;
            default: printf("Error: character not supported"); break;
        }
        decimal_num /= 16;
        i++;
        length++;
    }

    char *hex_buffer_reversed;
    hex_buffer_reversed = malloc(length * sizeof(char));

    for(int i = length - 1; i >= 0; i--)
    {
        hex_buffer_reversed[length - i - 1] = hex_buffer[i];
    }

    
    *hex_size = length;
    return hex_buffer_reversed;
}

int main()
{    
    char *hex_val;
    hex_val = malloc(100 * sizeof(char));

    int length; 
    hex_val = decimal_to_hex(1999, &length);

    for(int i = 0; i < length; i++)
    {
        printf("%c", hex_val[i]);
    }

    return 0;
}
