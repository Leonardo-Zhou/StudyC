//
// Created by LeonardoZhou on 2022/2/25.
//

#include <stdio.h>

int main(){
    int a = 3;
    double b = 1.0;
    while(a/b - b > 0.000001||a/b - b < -0.000001) {
        b =(b + a/b)/2;
    }
    printf("%f",b);
}