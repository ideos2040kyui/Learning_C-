#include <stdio.h>
#include <iostream>
using namespace std;
int comb3(int n, int k){
    int i,j;
    int a[10];
    if (n-k < k) k = n-k;
    if(k==0)return 1;
    if(k==n)return n;
    for (i=0; i<k; i++){
        a[i] = i+2;
    }
    for (i=3; i<=n-k+1; i++){
        a[0] = i;
        for (j=1; j<k; j++){
            a[j] += a[j-1]; 
        }
    }
    return a[k-1];
}

int main(void){
    int ans;
    ans = comb3(7, 3);
    printf("%d", ans);
    return 0;
}