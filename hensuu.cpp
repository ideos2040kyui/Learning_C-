#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int r;
    r = 3;
    cout << r*r*3.14 << "\n";
    cout << 3*3*3.14 << "\n";
    int value;
    value = 100;
    // cout << value << "\n";
    // char 1bite 文字　よく使う
    // short 2bite 整数
    // int 4bite 整数　よく使う
    // long 8bite 整数
    // float 4bite 小数
    // double 8bite 小数 よく使う
    double pi = 3.14;
    cout << (int)pi << "\n";
    int apple = 10;
    apple += 5;
    apple -= 5;
    apple *= 5;
    apple /= 5;
    cout << apple << "\n";
    int x = 10;
    int y = 10;
    x++;
    y--;
    cout << "xの値：" << x << "\n";
    cout << "yの値：" << y << "\n";
    const int z = 10; //あとに変更できない数
    cout << z << "\n";
    int v, w ;
    cout << "２つの値を入力してください\n";
    cin >> v >> w ;
    cout << "足し算の結果：" << v+w << "\n";
    return 0;
} 