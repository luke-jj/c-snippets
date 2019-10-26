#ifndef __I_CHOMP_C_
#define __I_CHOMP_C_

/**
 * Chop off a newline if it is the last character of a string.
 *
 * param char* Pointer to a string terminated with '\0'
 * return char* Returns this string.
 */
char *chomp(char *str) {

	int length = 0;

	for (length = 0; str[length] != '\0'; length++) { }

	if (length == 0) {
		return str;
	}

	if (str[length - 1] == '\n') {
		str[length -1] = '\0';
		return str;
	}

	return str;
}

#endif
