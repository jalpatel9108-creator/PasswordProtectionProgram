#include <stdio.h>
#include <string.h>
#include <conio.h>  // For getch()
#include <windows.h> // For Sleep()

#define MAX_ATTEMPTS 3
#define PASSWORD "secure123"

void getHiddenPassword(char *buffer, int size) {
    int i = 0;
    char ch;
    while (1) {
        ch = getch(); // get character without showing it
        if (ch == 13) { // Enter key
            buffer[i] = '\0';
            printf("\n");
            break;
        } else if (ch == 8) { // Backspace
            if (i > 0) {
                i--;
                printf("\b \b"); // Erase last character
            }
        } else if (i < size - 1) {
            buffer[i++] = ch;
            printf("*"); // Show asterisk
        }
    }
}

int main() {
    char input[50];
    int attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your password: ");
        getHiddenPassword(input, sizeof(input));

        if (strcmp(input, PASSWORD) == 0) {
            printf("Access granted.\n");
            return 0;
        } else {
            attempts++;
            if (attempts < MAX_ATTEMPTS) {
                printf("Incorrect password. You have %d attempt(s) left.\n", MAX_ATTEMPTS - attempts);
            }
        }
    }

    printf("Access denied. Too many incorrect attempts.\n");
    Sleep(2000); // Pause for 2 seconds before exit
    return 0;
}
