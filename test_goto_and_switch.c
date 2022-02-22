//
// Created by LeonardoZhou on 2022/2/23.
//

#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch(a) {
        case 1:
            printf("1\n");
            goto t;
        case 2:
            printf("2\n");
            break;
    }

        t:
            printf("º¯Êýµ÷ÓÃ");
}