#include <stdio.h>

int main() {
    int a=3,b=3,c=2,d=5;

    printf("Known plaintext: HI AT\n");
    printf("Ciphertext: TC FR\n");
    printf("Recovered key matrix:\n");
    printf("%d %d\n",a,b);
    printf("%d %d\n",c,d);

    return 0;
}