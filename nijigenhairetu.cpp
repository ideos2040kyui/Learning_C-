#include <stdio.h>
#include <iostream>

int main(void){
    int nijigen[9][9];
    for (int i=0;i<9;i++)
        for (int j=0;j<9;j++)
            nijigen[i][j] = (i+1)*(j+1);
    for (int i=0;i<9;i++){
        for (int j=0;j<9;j++)
            printf("%d  ", nijigen[i][j]);
        printf("\n");
    }
    printf("Hello World!");
    return 0;
}