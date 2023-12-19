#include <stdio.h>
#include <iostream>
using namespace std;

void hello();
void nibai(int x);
int keisan(int x, int y);

int main(void){
    hello();

    int num;
    cout << "数値を入力してください\n";
    cin >> num;
    nibai(num);

    int apple, orange;
    cout <<"りんごの個数は？";
    cin >> apple;
    cout <<"オレンジの個数は？";
    cin >> orange;
    int judge = keisan(apple, orange);
    if (judge > 2000){
        cout << "予算オーバーです\n";
    }
    else {
        cout << "予算範囲内です\n";
    }

    return 0;
}

void hello(){
    cout << "HelloWorld!\n";
    return;
}

void nibai(int x){
    cout << x*2 << "\n";
    return ;
}

int keisan(int x , int y){
    int goukei = (300*x) +(200*y);
    cout << "合計金額は" << goukei << "円です\n";
    return goukei;
}
