
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int k, i;

    printf("Enter text: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter key (1-25): ");
    scanf("%d", &k);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = (s[i] - 'A' + k) % 26 + 'A';
        else if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a' + k) % 26 + 'a';
    }

    printf("Cipher text: %s", s);
    return 0;
}
