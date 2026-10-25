#include <stdio.h>
int main() {
    char text[100];
    int i, key;
    printf("Enter text: ");
    scanf("%99s", text);
    printf("Enter key: ");
    scanf("%d", &key);

    for(i = 0; text[i] != '\0'; i++)
        text[i] = text[i] ^ key;

    printf("Encrypted text: %s", text);
    return 0;
}