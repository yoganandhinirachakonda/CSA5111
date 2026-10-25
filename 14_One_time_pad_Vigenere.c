#include <stdio.h>

int main() {
    char s[100];
    int k[100],i,n;

    printf("Enter text: ");
    scanf("%99s",s);
    printf("Enter length: ");
    scanf("%d",&n);
    printf("Enter key numbers: ");

    for(i=0;i<n;i++)
        scanf("%d",&k[i]);

    printf("Cipher: ");
    for(i=0;i<n;i++)
        printf("%c",(s[i]-'A'+k[i])%26+'A');

    return 0;
}