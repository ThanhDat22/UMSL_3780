#include <stdio.h>

/** This function prints the size of the input string.
 * @param s the input string
 */
void print_sizeof(char s[]) {
    printf("Inside print_sizeof function, sizeof(mystring) is: %d", sizeof(s));
    printf(" bytes\n");
}

int main() {
    char mystring[] = "1234567890";

    printf("Inside main: sizeof(mystring) is: %d", sizeof(mystring));
    printf(" bytes\n");

    print_sizeof(mystring);
}
