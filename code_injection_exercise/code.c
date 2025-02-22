#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_password_okay(void) {
    char password[100];

    // Replace gets() with fgets() to prevent buffer overflow
    if(fgets(password, sizeof(password), stdin) == NULL) {
        puts("Invalid input!");
        return false;
    }

    // Remove the newline character from the password
    password[strcspn(password, "\n")] = 0;

    // Using strncpy() for copying the password to prevent buffer overflow
    char secure_password[12];
    strncpy(secure_password, password, sizeof(secure_password) - 1);
    secure_password[sizeof(secure_password) - 1] = '\0'; // Null-terminate the string

    if(!strcmp(secure_password, "goodpass")) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    puts("Enter the password: \n");
    bool password_status;
    password_status = is_password_okay();
    if(!password_status) {
        puts("Access denied!");
        exit(-1);
    } else {
        puts("Access granted!");
    }
}