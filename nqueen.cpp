#include <stdio.h>
#include <iostream>
using namespace std;
int a[1024];

void printa(int n){
    int i;
    if (n > 0) printf("%d", a[0]);
    for (i=1; i<n; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}

int check (int x , int y){
    int k;
    for (k=0; k<x; k++){
        if (a[k] == y) return 0;
    }
    return 1;
}

void f(int n, int x){
    int y=0;
    while(1){
        while(y < n){
            if (check(x, y)){
                a[x] = y;
                x = x+1;
                if (x >= n){
                    printa(n);
                    goto backtrack;
                }
                y = 0;
            }
            else {
                y = y+1;
            }
        }
    backtrack:
        x = x-1;
        if (x<0) return;
        y = a[x]+1;
    }
}

int main(void){
    f(4, 0);
    return 0;
}