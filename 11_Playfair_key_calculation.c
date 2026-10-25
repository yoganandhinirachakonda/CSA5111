#include <stdio.h>

int main() {
    double n=1;
    int i;

    for(i=1;i<=25;i++)
        n=n*i;

    printf("Number of keys: 25! = approximately 1.55e25");
    return 0;
}