#include <stdio.h>
#include <string.h>

int main() {
    char s[100], k[100];
    int i, n;

    printf("Enter text: ");
    scanf("%99s", s);
    printf("Enter key: ");
    scanf("%99s", k);

    n = strlen(k);
    for(i=0; s[i]; i++)
        s[i] = (s[i]-'A'+k[i%n]-'A')%26+'A';

    printf("Cipher: %s", s);
    return 0;
}