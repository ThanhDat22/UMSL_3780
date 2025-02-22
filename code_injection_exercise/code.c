#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_password_okay(void) {
    char password[12];
    
    gets(password);
    if (!strcmp(password, "goodpass")) { 
        return(true); 
    } else { 
        return(false); 
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