#include <stdio.h>

int main() {
	
	int i = 0;
    char ch[100];
    
    printf("Enter a string in lowercase: ");
    fgets(ch, sizeof(ch), stdin);

    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
    }

    printf("Converted string to uppercase: %s\n", ch);

    return 0;
}