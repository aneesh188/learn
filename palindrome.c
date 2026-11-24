#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[100];
    size_t startIndex;
    size_t endIndex;
    int palindromeStatus = 1;

    printf("Enter a word or number: ");
    if (scanf("%99s", text) != 1)
    {
        fprintf(stderr, "Please enter a word or number.\n");
        return 1;
    }

    startIndex = 0;
    endIndex = strlen(text);
    if (endIndex > 0)
    {
        endIndex--;
    }

    while (startIndex < endIndex)
    {
        if (text[startIndex] != text[endIndex])
        {
            palindromeStatus = 0;
            break;
        }
        startIndex++;
        endIndex--;
    }

    if (palindromeStatus)
    {
        printf("%s is a palindrome.\n", text);
    }
    else
    {
        printf("%s is not a palindrome.\n", text);
    }

    return 0;
}
