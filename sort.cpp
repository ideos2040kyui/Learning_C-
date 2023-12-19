#include <stdio.h>
#include <iostream>
using namespace std;

#define youso (13)

int baburu_sort(int *p_hairetu){
    int i, j, sortnum;
    for(i=0; i<youso-1; i++){
        for(j=0; j<youso-1-i; j++){
            int tmp=0;
            if(p_hairetu[youso-2-j] > p_hairetu[youso-1-j]){
                tmp = p_hairetu[youso-2-j];
                p_hairetu[youso-2-j] = p_hairetu[youso-1-j];
                p_hairetu[youso-1-j] = tmp;
                sortnum++;
            }
        }
    }
    return sortnum;
}

int sentaku_sort(int *p_hairetu){
    int i, j, min, tmp=0, sortnum=0;

    for(i=0; i<youso; i++){
        min = i;
        for(j=i+1; j<youso; j++){
            if (p_hairetu[min] > p_hairetu[j]){
                min = j;
            }
            sortnum++;
        }
        tmp = p_hairetu[i];
        p_hairetu[i] = p_hairetu[min];
        p_hairetu[min] = tmp;
    }
    return sortnum;
}


int marge_sort(int *p_hairetu ,int length){

    int i;
    if (length == 1){
        return 0;
    }

    int a_length = length/2;
    int b_length = length-a_length;
    int a[a_length]; int b[b_length];
    for(i=0; i<a_length; i++){
        a[i] = p_hairetu[i];
    } 
    for(i=0; i<b_length; i++){
        b[i] = p_hairetu[i+a_length];
    }
    int sortnum=0;
    sortnum += marge_sort(a, a_length);
    sortnum += marge_sort(b, b_length);

    int pa, pb;
    pa = 0; pb = 0;
    for(i=0; i<a_length+b_length; i++){
        if (pa == a_length){
            p_hairetu[i] = b[pb++];
        }
        else if (pb == b_length){
            p_hairetu[i] = a[pa++];
        }
        else{
            if (a[pa] < b[pb]){
                p_hairetu[i] = a[pa++];
            }
            else {
                p_hairetu[i] = b[pb++];
            }
            sortnum++;
        }
    }
    return sortnum;
}

struct tree{
    int n;
    int *left;
    int *right;
};

int heap_sort(int *p_hairetu){
    int i, j, tmp, max, sortnum=0;
    for(i=0; i<youso; i++){
        for(j=youso-1-i; j>=0; j--){
            if (2*j+1 > youso-1-i){
            }
            else if (2*j+2 > youso-1-i){
                if (p_hairetu[j] < p_hairetu[2*j+1]){
                    tmp = p_hairetu[j];
                    p_hairetu[j] = p_hairetu[2*j+1];
                    p_hairetu[2*j+1] = tmp;
                    sortnum++;
                }
            }
            else{
                if (p_hairetu[2*j+1] < p_hairetu[2*j+2]){
                    max = 2*j+2;
                }
                else{
                    max = 2*j+1;
                }
                if (p_hairetu[j] < p_hairetu[max]){
                    tmp = p_hairetu[j];
                    p_hairetu[j] = p_hairetu[max];
                    p_hairetu[max] = tmp;
                    sortnum++;
                }
            }

        }
        tmp = p_hairetu[0];
        p_hairetu[0] = p_hairetu[youso-1-i];
        p_hairetu[youso-1-i] = tmp;
    }
    return sortnum;
}
int main(void){
    int N[youso] = {50, 13, 34, 75, 62, 20, 28, 11, 35, 12, 98, 36, 82};
    int *p_hairetu;
    p_hairetu = N;
    int i;
    printf("ソートする前\n");
    for (i=0; i<youso; i++){
        printf("%d, ", N[i]);
    }printf("\n");

    int sortnumber=0;
    // sortnumber = sentaku_sort(p_hairetu);
    // sortnumber = baburu_sort(p_hairetu);
    // sortnumber = marge_sort(p_hairetu, youso);
    sortnumber = heap_sort(p_hairetu);

    printf("ソートした後\n");
    for (i=0; i<youso; i++){
        printf("%d, ", N[i]);
    }printf("\n");
    printf("計算回数%d", sortnumber);

    return 0;
}
