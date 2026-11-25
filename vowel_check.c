#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char letter;
    int lowercaseLetter;

    printf("Enter a letter: ");
    if (scanf(" %c", &letter) != 1)
    {
        fprintf(stderr, "Please enter a letter.\n");
        return 1;
    }

    if (!isalpha((unsigned char)letter))
    {
        fprintf(stderr, "Input must be an alphabetic letter.\n");
        return 1;
    }

    lowercaseLetter = tolower((unsigned char)letter);
    if (lowercaseLetter == 'a' || lowercaseLetter == 'e' ||
        lowercaseLetter == 'i' || lowercaseLetter == 'o' ||
        lowercaseLetter == 'u')
    {
        printf("%c is a vowel.\n", letter);
    }
    else
    {
        printf("%c is not a vowel.\n", letter);
    }

    return 0;
}
