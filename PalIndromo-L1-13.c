#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char *str) {
	int len = strlen(str);
	int i, j;
	for (i = 0; i < len; i++) {
		str[i] = tolower(str[i]);
	}
	
	int k = 0;
	for (i = 0; i < len; i++) {
		if (str[i] != ' ') {
			str[k++] = str[i];
		}
	}
	str[k] = '\0';
	
	len = strlen(str);
	for (i = 0, j = len - 1; i < j; i++, j--) {
		if (str[i] != str[j]) {
			return 0; // No será un palíndromo
		}
	}
	return 1; //Será palíndromo
}

void toUpperCase(char *str) {
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		str[i] = toupper(str[i]);
	} //Pasamos mi nombre a mayúsculas
}

int main() {
	char name[100];
	printf("Ingrese su nombre: ");
	fgets(name, sizeof(name), stdin);
	
	int len = strlen(name);
	if (len > 0 && name[len - 1] == '\n') {
		name[len - 1] = '\0';
	}
	
	printf("Tu nombre en mayúsculas: ");
	toUpperCase(name);
	printf("%s\n", name);
	if (isPalindrome(name)) {
		printf("Tu nombre  es un palíndromo.\n");
	} else {
		printf("Tu nombre no es un palíndromo.\n");
	}
	
	return 0;
}

