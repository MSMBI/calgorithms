#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int hex_to_decimal(char *input)
{
    int length;
    for (length = 0; input[length] != '\0'; ++length);

    int *decimal_buffer;
    decimal_buffer = malloc(length * sizeof(int));

    char *hex;
    hex = malloc(length * sizeof(char));

    int decimal_val = 0;

    // Reverse order of hex string;
    for(int j = length - 1; j >=0; j--)
    {
        hex[length - j - 1] = input[j];
    }

    for (int i = 0; i < length; ++i)
    {
        switch (hex[i])
        {
        case '0':
            decimal_buffer[i] = 0; break;

        case '1':
            decimal_buffer[i] = pow(16, i); break;

        case '2':
            decimal_buffer[i] = 2*pow(16, i); break;

        case '3':
            decimal_buffer[i] = 3*pow(16, i); break;

        case '4':
            decimal_buffer[i] = 4*pow(16, i); break;

        case '5':
            decimal_buffer[i] = 5*pow(16, i); break;

        case '6':
            decimal_buffer[i] = 6*pow(16, i); break;

        case '7':
            decimal_buffer[i] = 7*pow(16, i); break;

        case '8':
            decimal_buffer[i] = 8*pow(16, i); break;

        case '9':
            decimal_buffer[i] = 9*pow(16, i); break;

        case 'A':
            decimal_buffer[i] = 10*pow(16, i); break;

        case 'B':
            decimal_buffer[i] = 11*pow(16, i); break;

        case 'C':
            decimal_buffer[i] = 12*pow(16, i); break;

        case 'D':
            decimal_buffer[i] = 13*pow(16, i); break;

        case 'E':
            decimal_buffer[i] = 14*pow(16, i); break;

        case 'F':
            decimal_buffer[i] = 15*pow(16, i); break;

        default:
            printf("Error: character not supported"); break;
        }

        decimal_val += decimal_buffer[i];
    }

    return decimal_val;
}

int main()
{
    int decimal_val = hex_to_decimal( "7CF");

    printf("%d", decimal_val);

    return 0;
}
