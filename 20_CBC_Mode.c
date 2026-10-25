#include <stdio.h>
int main() {
    int p[3]={10,20,30}, key=5, iv=7, c[3], i;

    c[0]=p[0]^iv^key;
    for(i=1;i<3;i++)
        c[i]=p[i]^c[i-1]^key;

    printf("Cipher: ");
    for(i=0;i<3;i++)
        printf("%d ",c[i]);

    return 0;
}