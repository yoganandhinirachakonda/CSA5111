#include <stdio.h>

int main() {
    char s[100];
    int a,b,i,x,d;

    printf("Enter ciphertext: ");
    scanf("%99s",s);

    for(a=1;a<26;a++) {
        if(a%2==0 || a%13==0) continue;

        for(d=1;d<26;d++)
            if(a*d%26==1) break;

        for(b=0;b<26;b++) {
            printf("\n");
            for(i=0;s[i];i++) {
                x=(s[i]-'A'-b+26)%26;
                printf("%c",(d*x)%26+'A');
            }
        }
    }
    return 0;
}