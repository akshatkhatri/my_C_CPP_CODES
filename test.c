#include <stdio.h>
#include <string.h>

int main() {
    char str[16]; // Make sure it has enough space to hold the entire string and null terminator
    strncpy(str, "geeks for geeks", sizeof(str) - 1); // Safe copying
    str[sizeof(str) - 1] = '\0'; // Manually null-terminate the string
    printf("%s", str);
    return 0;
}
