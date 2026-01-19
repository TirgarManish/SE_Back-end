#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Reverse a string */
void ReverseString(char str[])
{
    int i, len = strlen(str);
    char temp;

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed String: %s\n", str);
}

/* Concatenate two strings */
void ConcatenateStrings(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

/* Check Palindrome */
void CheckPalindrome(char str[])
{
    int i, len = strlen(str), flag = 1;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("String is a Palindrome\n");
    else
        printf("String is NOT a Palindrome\n");
}

/* Copy a string */
void CopyString(char str[])
{
    char copy[100];
    strcpy(copy, str);
    printf("Copied String: %s\n", copy);
}

/* Find length of string */
void StringLength(char str[])
{
    printf("Length of String: %lu\n", strlen(str));
}

/* Frequency of character */
void FrequencyOfChar(char str[])
{
    char ch;
    int count = 0;

    printf("Enter character to find frequency: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);
}

/* Count vowels and consonants */
void CountVowelsAndConsonants(char str[])
{
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}

/* Count blank spaces and digits */
void CountSpacesAndDigits(char str[])
{
    int spaces = 0, digits = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
    }

    printf("Blank Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
}

/* Main Function */
int main()
{
    char str1[100], str2[100];
    int choice;
    char cont;

    do
    {
        printf("\n========== STRING OPERATIONS MENU ==========\n");
        printf("1. Reverse a String\n");
        printf("2. Concatenate Strings\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy a String\n");
        printf("5. Length of String\n");
        printf("6. Frequency of Character\n");
        printf("7. Count Vowels and Consonants\n");
        printf("8. Count Blank Spaces and Digits\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        getchar();  // clear buffer

        if (choice >= 1 && choice <= 8)
        {
            printf("Enter string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';
        }

        switch (choice)
        {
        case 1:
            ReverseString(str1);
            break;

        case 2:
            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';
            ConcatenateStrings(str1, str2);
            break;

        case 3:
            CheckPalindrome(str1);
            break;

        case 4:
            CopyString(str1);
            break;

        case 5:
            StringLength(str1);
            break;

        case 6:
            FrequencyOfChar(str1);
            break;

        case 7:
            CountVowelsAndConsonants(str1);
            break;

        case 8:
            CountSpacesAndDigits(str1);
            break;

        default:
            printf("Invalid choice! Please select between 1 and 8.\n");
        }

        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    printf("\nThank you for using String Operations Application!\n");
    return 0;
}
