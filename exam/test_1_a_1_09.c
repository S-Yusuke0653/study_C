#include<stdio.h>

int main()
{   
    float weight;       /*体重について*/
    printf("体重を入力してください。---");
    scanf("%f", &weight);

    printf("weight = %f\n", weight);    /*入力された体重を出力*/
    printf("The weight on the surface of the ”moon” = %.2f Kg\n", weight * 0.17);   /*入力をもとに値を計算し入力*/

    return 0;
}