#include <stdio.h>
#include <iostream>
using namespace std;

int keisan(int x[]);

int main(void){
    int array[3];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    cout << array[0] << "\n";
    cout << array[1] << "\n";
    cout << array[2] << "\n";

    int array2[3] = {40, 50 , 60};
    cout << array2[0] << "\n";
    cout << array2[1] << "\n";
    cout << array2[2] << "\n";

    int array3[5] = {10, 20, 30, 40, 50};
    int i;
    for(i=0; i<5; i++){
        cout << i << "番目" << array3[i] << "\n";
    }

    int num;
    cout << "要素数はいくつですか";
    cin >> num;
    int arrayn[num];
    for(i=0; i<num; i++){
        cin >> arrayn[i];
    }
    for(i=0; i<num; i++){
        cout << i << "番目" << arrayn[i] << "\n";
    }

    int arraytensu[3] = {78, 94, 64};
    cout << "合計は" << keisan(arraytensu) << "です\n";
    cout << "平均は" << keisan(arraytensu)/3 << "です\n";
    return 0;
}

int keisan(int x[]){
    int i;
    int sum = 0;
    for(i=0; i< 3; i++){
        sum += x[i]; 
    }
    return sum;
}