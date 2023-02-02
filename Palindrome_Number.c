#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int num)
{
    char num_string[10];
    sprintf(num_string, "%d", num);

    int length;
    for(length = 0; num_string[length] != '\0'; length ++);

    char reversed_string[length];

    // reverse order of the string
    for(int i = length - 1; i >= 0; i --)
    {
        reversed_string[length - i - 1] = num_string[i];
    }

    int counter = 0;
    for(int j=0; j < length; j++)
    {
        if(num_string[j] == reversed_string[j])
        {
            counter ++;
        }
    }

    if (counter == length) return true;

    else return false;
}

int main()
{
    int num = 1322231;
    bool result = isPalindrome(num);
    printf("%d",  result);
    
    return 0;
}