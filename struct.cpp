#include <stdio.h>
#include <iostream>
using namespace std;

struct Student{
    int year;
    string name;
    double weight;
    // double height;
}Taro, Hanako;

// struct {
//     int year;
//     char name[128];
//     double weight;
//     double height;
// }Taro, Hanako;   
// Studentの部分を消すことができるが欠点は新たにTaro,Hanako以外を宣言することができない

struct Fruits{
    int apple;
    int orange;
    int banana;
};

void price(struct Fruits store1){
    printf("リンゴの金額は；%d\n", store1.apple);
    printf("オレンジの金額は；%d\n", store1.orange);
    printf("バナナの金額は；%d\n", store1.banana);
    return;
}
struct Test{
    char name[128];
    int kokugo;
    int sansu;
    int eigo;
};

struct Test students[4] = {
    {"Taro", 10, 20, 30},
    {"Jiro", 30, 20, 30},
    {"Saburo", 100, 25, 50},
    {"Hanako", 0, 30, 60}
};

void line(void){
    int i;
    for(i=0; i<50; i++){
        printf("-");
    }
    printf("\n");
}

int main(void){
    Taro.year = 10;
    Hanako = {12, "Hanako", 35};
    printf("Taroの年齢：%d\n", Taro.year);
    printf("Hanakoの年齢：%d\n", Hanako.year);

    struct Fruits store1 = {100, 200, 300};
    price(store1);
    printf("%10s, %10s, %10s, %10s\n", "名前", "国語", "算数", "英語");
    // % 10 s の10は10も自分の幅
    line();
    int i;
    for(i=0; i<4; i++){
        printf("%8s, %8d, %8d, %8d\n", students[i].name, students[i].kokugo, students[i].sansu, students[i].eigo);
    }
    line();
    return 0;
}
