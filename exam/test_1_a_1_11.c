#include<stdio.h>

int main()
{
    int times;                      /*入力された回数を格納する変数*/
    float distance, ave_speed;      /*距離と平均速度を格納する変数*/
    printf("計算する回数を入力してください：");
    scanf("%d", &times);            /*回数を入力*/
    for (int n = 1; n <= times; n++) /*入力された回数まで繰り返す。*/
    {
        printf("距離を入力してください：");
        scanf("%f", &distance);
        printf("平均速度(km/h)を入力してください：");
        scanf("%f", & ave_speed);
        printf("所要時間は%.1f時間です。\n",distance / ave_speed);  /*距離/平均速度で時間を出力*/
    }
    return 0;
}