//
// Created by leonardozhou on 2022/2/26.
//

#include <stdio.h>

void useAddress();
void useValue();
void arrayCopy();
void arrayDefinition();

int main() {
//    arrayDefinition();
    int a[10];
    printf("%d",sizeof(a));
}

void useAddress() {
    /*使用地址直接进行运算，顾不需要加&符号*/
    int a[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", a+i);
    }
    for (int i = 0; i < 5; ++i) {
        printf("%d ", a[i]);
    }
}

void useValue() {
    /*使用值，这时需要加&*/
    int a[5];
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d",a[i]);
    }
}

void arrayCopy() {
    int a[5] = {1,2,3,4,5};
    int b[sizeof(a)/4]; /*sizeof获得的是变量所占的字节数。除以4可以获得真实长度*/
    int i = 0;
    while (i<4) {
        b[i] = a[++i];
    }   /*b 的值为 4201120 2 3 4 5*/

    while (i<4) {
        b[i] = a[i++];
    }   /*b的值为 4201120 1 2 3 4*/


    for (int i = 0; i < 5; ++i) {
        printf("%d ", b[i]);
    }
}

void arrayDefinition() {
    int a[10] = {[5] = 3,[7] = 6};  /*0 0 0 0 0 3 0 6 0 0*/
    int b[10] = {0};    /*0 0 0 0 0 0 0 0 0 0*/
    int c[] = {[9] = 10};   /*0 0 0 0 0 0 0 0 0 10*/
    for (int i = 0; i < 10; ++i) {
        printf("%d ",c[i]);
    }
}
