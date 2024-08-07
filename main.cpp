#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// Function to reverse a string
void reverseString(char* str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}


// Function to remove duplicate characters in a string
void removeDuplicates(char* str) {
    int len = strlen(str);
    if (len <= 1) {
        return;
    }

    int i = 0, j = 0;
    while (j < len) {
        int isDuplicate = 0;
        for (i = 0; i < j; i++) {
            if (str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            str[j] = str[i];
            j++;
        }
        j++;
    }

    str[j] = '\0';
}


// Function to convert a string to lowercase
void convertToLowerCase(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}


// Function to convert a string to uppercase
void convertToUpperCase(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}


// Function to check if a string is a palindrome
int isPalindrome(char* str) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}


// Function to check if a string is a pangram
int isPangram(char* str) {
    int alphabet[26] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            alphabet[str[i] - 'a'] = 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            alphabet[str[i] - 'A'] = 1;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return 0;
        }
    }

    return 1;
}


// Function to count the number of vowels in a string
int countVowels(char* str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }

    return count;
}


// Function to count the number of consonants in a string
int countConsonants(char* str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
                str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
                count++;
            }
        }
    }

    return count;
}


// Function to count the number of digits in a string
int countDigits(char* str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }

    return count;
}


// Function to count the number of special characters in a string
int countSpecialCharacters(char* str) {
    int count = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9'))) {
            count++;
        }
    }

    return count;
}


int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // Reverse the string
    reverseString(str);
    printf("Reversed string: %s\n", str);

    // Remove duplicate characters
    removeDuplicates(str);
    printf("String with duplicate characters removed: %s\n", str);

    // Convert the string to lowercase
    convertToLowerCase(str);
    printf("String converted to lowercase: %s\n", str);

    // Convert the string to uppercase
    convertToUpperCase(str);
    printf("String converted to uppercase: %s\n", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // Check if the string is a pangram
    if (isPangram
    (str)) {
        printf("The string is a pangram.\n");
    } else {
        printf("The string is not a pangram.\n");
    }

    // Count the number of vowels
    int vowelCount = countVowels(str);
    printf("Number of vowels: %d\n", vowelCount);

    // Count the number of consonants
    int consonantCount = countConsonants(str);
    printf("Number of consonants: %d\n", consonantCount);

    // Count the number of digits
    int digitCount = countDigits(str);
    printf("Number of digits: %d\n", digitCount);

    // Count the number of special characters
    int specialCharacterCount = countSpecialCharacters(str);
    printf("Number of special characters: %d\n", specialCharacterCount);

    return 0;
}
