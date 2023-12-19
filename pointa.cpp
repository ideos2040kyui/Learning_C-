#include <stdio.h>
#include <iostream>
using namespace std;

void kakikae(int *x);
void keisan(int num1, int num2, int *tasizan, int *hikizan);

struct Fruits{
    char name[128];
    int price;
    int zaiko;
}; //←この";"まじで重要

int main(void){
    int apple = 10;
    int *p;
    p = &apple;
    printf("%d\n", *p);

    // ポインタ重要事項
    // "*" はその先を示すものだという理解 また宣言した際のみはアドレスだけを格納できるもの
    // "&" はその逆、こちらの方は理解がはやい
    // 数値式のアドレスを示すよということ

    int orange = 20;
    printf("%d\n", orange);
    int *p_orange;
    p_orange = &orange;
    kakikae(&orange);
    printf("%d\n", orange);

    int num1 = 30;
    int num2 = 10;
    int tasizan = 0;
    int hikizan = 0;
    keisan(num1, num2, &tasizan, &hikizan);
    printf("足し算結果は%d\n", tasizan);
    printf("引き算結果は%d\n", hikizan);

    struct Fruits store = {"apple", 150, 50};
    struct Fruits *p_store;
    p_store = &store;
    printf("名前；%s\n", (*p_store).name); 
    //c言語では.のほうが*より優先、よって*をカッコで括る
    printf("値段；%d\n", (*p_store).price);
    printf("在庫；%d\n", (*p_store).zaiko);

    printf("名前；%s\n", p_store->name); 
    printf("値段；%d\n", p_store->price);
    printf("在庫；%d\n", p_store->zaiko);
    //アロー演算子の使い方
    //ポインタ->中身 と 構造体変数.中身 で次元が違うということのみ留意

    printf("名前；%s\n", store.name); 
    printf("値段；%d\n", store.price);
    printf("在庫；%d\n", store.zaiko);

    return 0;
}

void kakikae(int *x){
    *x = 25;
}

void keisan(int num1, int num2, int *tasizan, int *hikizan){
    *tasizan = num1 + num2;
    *hikizan = num1 - num2;
    return ;
}