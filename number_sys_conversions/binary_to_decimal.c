#include <stdio.h>

int binary_to_decimal(int *binary_num, int size)
{
    int multiplier = 1;

    int temp = 0;

    int decimal_num = 0;

    for (int i = size - 1; i >=0 ; i --)
    {
        switch(binary_num[i])
        {
            case 1: 
                    temp = multiplier;
                    break;

            case 0: temp = 0;
                    break;

            default:
                    printf("Error: character not supported"); 
                    break;
        }

        decimal_num += temp;

        multiplier*=2;
    }

    return decimal_num;
}

int main()
{
    int binary_num[] = {1,0,0,0,0,0,0,0};

    int size = sizeof(binary_num)/sizeof(*binary_num);

    int decimal_num = binary_to_decimal(binary_num, size);

    printf("%d", decimal_num);
    
    return 0;
}