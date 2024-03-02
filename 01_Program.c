#include <stdio.h>

// Function to get the length of a string
int strlen_custom(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to concatenate two strings
void strcat_custom(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Function to copy one string to another
void strcpy_custom(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

// Function to compare two strings
int strcmp_custom(const char *str1, const char *str2) {
    while (*str1 == *str2) {
        if (*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

int main() {
    // Test the implemented functions
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    
    printf("Length of str1: %d\n", strlen_custom(str1));
    
    strcat_custom(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    strcpy_custom(str3, str1);
    printf("Copied string: %s\n", str3);
    
    printf("Comparison result: %d\n", strcmp_custom(str1, str3));
    
    return 0;
}
