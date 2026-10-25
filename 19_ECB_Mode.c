#include <stdio.h>
int main() {
    int p[4]={10,20,30,40}, key=5, i;

    for(i=0;i<4;i++)
        printf("%d ", p[i]^key);

    return 0;
}