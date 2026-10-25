#include <stdio.h>

int main() {
    char s[100];
    char key[]="QWERTYUIOPASDFGHJKLZXCVBNM";
    int i,j;

    printf("Enter ciphertext: ");
    scanf("%99s",s);

    for(i=0;s[i];i++)
        for(j=0;j<26;j++)
            if(s[i]==key[j]) {
                s[i]='A'+j;
                break;
            }

    printf("Plaintext: %s",s);
    return 0;
}