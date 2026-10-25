#include <stdio.h>
int main() {
    int p=3, q=11, n=33, e=3, d=7, m=4;
    int c, decrypted;

    c = 31; /* 4^3 mod 33 */
    decrypted =  c; 
    decrypted =  (c*c*c*c*c*c*c) % 33;

    printf("Encrypted: %d\n", c);
    printf("Decrypted: %d", decrypted);
    return 0;
}