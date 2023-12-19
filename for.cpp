#include <stdio.h>
#include <iostream>
using namespace std;
int main(void){
    int i;
    for (i=1; i<10; i++){
        int j;
        for (j=1; j<10; j++){
            cout << i << "×" << j << "は" << i*j << "\n";
        }
    }

    int num = 1;
    int count = 0;
    while(num < 1000){
        num *= 2;
        count++;
        cout << count << "回目：" << num << "\n";

    }
    int num2 = 10;
    do{
        cout << "実行メッセージ\n";
    }while(num2 < 5);
    while(num2 < 5){
        cout << "メッセージ\n";
    }
    return 0;
}