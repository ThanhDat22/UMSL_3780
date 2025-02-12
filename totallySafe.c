/* Code from Secure Coding in C and C++
 * 2nd Edition by Robert C. Seacord
 *
 */

#include <stdlib.h>

unsigned int IsPasswordOK(void) {
	char Password[12];

	gets(Password);
	return 0 == strcmp(Password, "goodpass");
}

int main(void) {
	unsigned int PwStatus;

	puts("Enter password:");
	PwStatus = IsPasswordOK();
	if (PwStatus == 0) {
		puts("Access denied");
		exit(EXIT_FAILURE);
	}
}

