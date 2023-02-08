#include <stdio.h>
#include <stdbool.h>

bool detect_duplicate_chars(char *string)
{
    int length;
    for(length = 0; string[length] != '\0'; length ++);

    for(int i = 0; i < length; i ++)
    {
        for(int j = i + 1; j < length; j++)
        {
            if(string[j] == string[i])
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    char string[] = "hello";

    bool flag;
    flag = detect_duplicate_chars(string);

    printf("%d", flag);

    return 0;
}