#include <stdio.h>
#include <string.h>

int main() {

char string[20];
int choice;

printf("Enter string: ");
scanf("%s", string);

printf("1. Encrypt\n2. Decrypt");
scanf("%d", &choice);

if (choice == 1) {
//	encrypt(string);
	printf("encrypt");
} else if (choice == 2) {
	// decrypt(string);
	printf("decrypt");
} else {
	printf("end");
}
}

