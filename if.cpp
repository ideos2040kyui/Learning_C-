#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    if(10)
        cout << "実行される\n";
    if(0)
        cout << "実行されない\n"; 
    //不等式、等式記号がない場合()の中身が0かどうか
    int num;
    cout << "数値を入力してください\n";
    cin >> num;
    if(num == 10)
        cout << "10と同じです\n";
    if(num != 10)
        cout << "10ではありません\n";
    if(num > 10)
        cout << "10より大きいです\n";
    if(num < 10)
        cout << "10より小さいです\n";
  
    int num2 ;
    cout << "数値を入力してください\n";
    cin >> num2;
    if(5 <= num2 && num2 <= 10)
        cout << "5と10の間にあります\n";
   
    int num3;
    cout <<"数値を入力してください\n";
    cin >> num3;
    if (num3 == 10){
        cout << "10と同じです\n";
    }
    else{
        cout << "10ではありません\n";
    }

    int year;
    cout << "年齢を入力してください\n";
    cin >> year;
    if(year <= 3){
        cout << "無料です\n";
    }
    else if (year <= 20){
        cout << "1000円です\n";
    }
    else {
        cout << "2000円です\n";
    }

    int num4;
    cout << "番号を入力してください\n";
    cin >> num4;
    switch (num4){
        case 1:
            cout << "ハリー\n";
            break;
        case 2:
            cout << "ロン\n";
            break;
        case 3:
            cout << "ハーマイオニー\n";
            break;
        case 4:
            cout << "ネビル\n";
            break;
    }
    return 0;
}