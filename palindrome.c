#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100];
    size_t left;
    size_t right;
    int isPalindrome = 1;

    printf("Enter a word or number: ");
    if (scanf("%99s", input) != 1)
    {
        fprintf(stderr, "Please enter a word or number.\n");
        return 1;
    }

    left = 0;
    right = strlen(input);
    if (right > 0)
    {
        right--;
    }

    while (left < right)
    {
        if (input[left] != input[right])
        {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
    {
        printf("%s is a palindrome.\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}
