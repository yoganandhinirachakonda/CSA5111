#include <stdio.h>

int main() {
    char s[100];
    char key[]="CIPHERABDFGJKLMNOQSTUVWXYZ";
    int i;

    printf("Enter text: ");
    scanf("%99s",s);

    for(i=0;s[i];i++)
        s[i]=key[s[i]-'A'];

    printf("Cipher: %s",s);
    return 0;
}