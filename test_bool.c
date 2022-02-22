//
// Created by LeonardoZhou on 2022/2/22.
//

#include <stdbool.h>
#include <stdio.h>


int main(){
    bool flag = false;
    _Bool flag1 = false;
    int flag2 = 0;  //0 == false
    if (!flag2){
        printf("flag2");
    }

    if (!flag){
        printf("flag");
    }
    return 0;
}


