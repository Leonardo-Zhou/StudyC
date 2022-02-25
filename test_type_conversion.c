//
// Created by LeonardoZhou on 2022/2/25.
//

#include <stdio.h>

int main(){
    //隐性转化
    char c;
    short int s;
    int i;
    unsigned int u;
    long int l;
    unsigned long int ul;
    float f;
    double d;
    long double ld;
    i = i + c; /* c is converted to int */
    i = i + s; /* s is converted to int */
    u = u + i; /* i is converted to unsigned int */
    l = l + u; /* u is converted to long int */
    ul = ul + l; /* l is converted to unsigned long int */
    f = f + ul; /* ul is converted to float */
    d = d + f; /* f is converted to double */
    ld = ld + d; /* d is converted to long double */


    //强制转换
    int a = 1000000;
    long b;
    b = (long)a*a;

    float h = 9.8f; //如果不加f，默认9.8为double类型
    float decimalPart;
    decimalPart = h - (int)h;
    printf("%f",decimalPart);

    unsigned int uns;
    int negativeNumber = -3;
    uns = negativeNumber;   //uns = -3
    printf("%d", uns);
    printf("%d",uns<0); //0



}
