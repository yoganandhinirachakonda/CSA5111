#include <stdio.h>

int main() {
    char s[3];
    int x,y,a,b;

    printf("Enter two letters: ");
    scanf("%2s",s);

    a=s[0]-'A';
    b=s[1]-'A';

    x=(3*a+3*b)%26;
    y=(2*a+5*b)%26;

    printf("Cipher: %c%c\n",x+'A',y+'A');

    a=x; b=y;
    x=(15*a+17*b)%26;
    y=(20*a+9*b)%26;

    printf("Plaintext: %c%c",x+'A',y+'A');
    return 0;
}