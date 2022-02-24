//
// Created by leonardozhou on 2022/2/24.
//

//　　　　单精度浮点数float的表示范围：-3.40E+38~3.40E+38
//
//　　　　双精度浮点数double的表示范围：-1.79E+308~-1.79E+308

#include "stdio.h"

int main() {
    long double a = 2.0;
    double b = 3.0;
    float c = 4.0;

    printf("%Lf\n",a);
    printf("%lf\n",b);
    printf("%f\n",c);
}