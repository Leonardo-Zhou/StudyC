//
// Created by LeonardoZhou on 2022/2/22.
//

#include <stdio.h>

int another_main(int grade);


int main(){
    int grade;
    scanf("%d",&grade);
    switch(grade){
        case 1:
            printf("����");
            break;
        case 2:
            printf("����");   //���úϸ�
//            break;
        case 3:
            printf("�ϸ�");
            break;
        default:
            printf("fine");
    }

    another_main(grade);
}

int another_main(int grade){
    switch (grade) {
        case 4:
        case 3:
        case 2:
        case 1: printf("Passing");  // 1234����passing
            break;
        case 0: printf("Failing");
            break;
        default: printf("Illegal grade");
            break;
    }
}