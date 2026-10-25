#include <stdio.h>

int main() {
    char m[5][5]={
        "MFHIK","UNOPQ","ZVWXY","ELARG","DSTBC"
    };
    char a,b;
    int i,j,r1=0,c1=0,r2=0,c2=0;

    printf("Enter two letters: ");
    scanf(" %c%c",&a,&b);

    for(i=0;i<5;i++)
        for(j=0;j<5;j++) {
            if(m[i][j]==a) r1=i,c1=j;
            if(m[i][j]==b) r2=i,c2=j;
        }

    if(r1==r2)
        printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
    else if(c1==c2)
        printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
    else
        printf("%c%c",m[r1][c2],m[r2][c1]);

    return 0;
}