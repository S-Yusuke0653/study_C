/*about scanf*/

#include<stdio.h>

int main(){
    int num;

    printf("整数値を入力してください----");
    scanf("%d", &num);   /*scanfで整数値を取得*/
    printf("あなたの入力した数値は%d\n", num);
}